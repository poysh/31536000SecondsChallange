from fastapi import FastAPI, Query, Path

app = FastAPI()


@app.get("/items/{item_id}")
async def read_items(
        item_id: int = Path(default=..., title="The ID of the item to get"),
        q: str | None = Query(default=None, alias="item-query")
):
    results = {"item_id": item_id}
    if q:
        results.update({"q": q})
    return results


# kwargs
@app.get("/items2/{item_id}")
async def read_tricky_items(*, item_id: int = Path(title="The ID of the item to get"), q: str):
    results = {"item_id": item_id}
    if q:
        results.update({"q": q})
    return results
