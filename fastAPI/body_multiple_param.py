from fastapi import FastAPI, Path, Body
from pydantic import BaseModel

app = FastAPI()


class Item(BaseModel):
    name: str
    description: str | None = None
    price: float
    tax: float | None = None


class User(BaseModel):
    username: str
    full_name: str | None = None


@app.put("/items/{item_id}")
async def update_item(
        *,
        item_id: int = Path(title="The ID of the item", ge=0, le=1000),
        q: str | None = None,
        item: Item | None = None,
        user: User
):
    results = {"item_id": item_id}
    if q:
        results.update({"q": q})
    if item:
        results.update({"item": item})
    if user:
        results.update({"user": user})
    return results


@app.put("/items2/{item_id}")
async def update_item(
        *,
        item_id: int = Path(title="The ID of the item", ge=0, le=1000),
        q: str | None = None,
        item: Item | None = None,
        user: User,
        importance: int = Body(gt=0)
):
    results = {"item_id": item_id, "importance": importance}
    if q:
        results.update({"q": q})
    if item:
        results.update({"item": item})
    if user:
        results.update({"user": user})
    return results


@app.put("/items3/{item_id}")
async def update_item2(
        *,
        item_id: int = Path(title="The ID of the item", ge=0, le=1000),
        q: str | None = None,
        item: Item = Body(embed=True)
):
    results = {"item id": item_id, "item": item}
    if q:
        results.update({"q": q})
    return results
