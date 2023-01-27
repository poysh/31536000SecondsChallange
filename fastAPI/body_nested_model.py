from fastapi import FastAPI, Body
from pydantic import BaseModel

app = FastAPI()


class Image(BaseModel):
    url: str
    name: str


class Item(BaseModel):
    name: str
    description: str | None = None
    price: float
    tax: float | None = None
    tags: set[str] = set()
    image: Image | None = None


class Offer(BaseModel):
    name: str
    description: str | None = None
    price: float
    items: list[Item]


# Expected body
# {
#     "name": "Foo",
#     "description": "The pretender",
#     "price": 42.0,
#     "tax": 3.2,
#     "tags": ["rock", "metal", "bar"],
#     "image": {
#         "url": "http://example.com/baz.jpg",
#         "name": "The Foo live"
#     }
# }
@app.put("/items/{item_id}")
async def update_item(item_id: int, item: Item = Body(embed=True)):
    results = {"item_id": item_id, "item": item}
    return results


# Notice how Offer has a list of Items, which in turn have an optional list of Images
@app.post("/offers/")
async def create_offer(offer: Offer):
    return offer


@app.post("/images/multiple/")
async def create_multiple_images(*, images: list[Image]):
    for image in images:
        print(image.url)
    return images


@app.post("/index-weights/")
async def create_index_weights(weights: dict[int, float]):
    return weights
