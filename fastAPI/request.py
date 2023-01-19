from fastapi import FastAPI
from pydantic import BaseModel


class Item(BaseModel):
    name: str
    description: str | None = "No description given"
    price: float
    tax: float | None = 19.0


app = FastAPI()


@app.post("/items/")
async def create_item(item: Item):
    item_dict = item.dict()
    if item.tax:
        price_with_tax = item.price + item.tax
        item_dict.update({"price_with_tax": price_with_tax})
    return item_dict


# Request body + path parameters
@app.post("/items/{item_id}")
async def create_more_items(item_id: int, item: Item):
    return {"item_id": item_id, **item.dict()}
