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


#     gt: greater than
#     ge: greater than or equal
#     lt: less than
#     le: less than or equal
@app.get("/items3/{item_id}")
async def get_num_valid(
        *,
        item_id: int = Path(title="The ID of the item to get", ge=0, le=1000),
        q: str,
        size: float = Query(gt=0, lt=10.5)
):
    results = {"item_id": item_id}
    if q:
        results.update({"q": q})
    if size:
        results.update({"size": size})
    return results
