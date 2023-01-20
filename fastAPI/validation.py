from fastapi import FastAPI, Query
from pydantic import BaseModel, Required

app = FastAPI()


# None = None set default value of None to None
@app.get("/items/")
async def read_items(q: str | None = Query(default=None, min_length=3, max_length=50, regex="^fixedquery$")):
    result = {"items": [{"item_id": "Foo"}, {"item_id": "Bar"}]}
    if q:
        result.update({"q": q})
    return result


# Pass default values, in this case the default value is set to "fixedquery"
@app.get("/items2/")
async def read_more_items(q: str = Query(default="fixedquery", min_length=3)):
    results = {"items": [{"item_id": "Foo"}, {"item_id": "Bar"}]}
    if q:
        results.update({"q": q})
    return results


# Required with Ellipsis (...)
@app.get("/items3/")
async def read_more_items2(q: str = Query(default=..., min_length=3)):
    results = {"items": [{"item_id": "Foo"}, {"item_id": "Bar"}]}
    if q:
        results.update({"q": q})
    return results


# Required with Required instead of Ellipsis (...)
@app.get("/items3/")
async def read_more_items2(q: str = Query(default=Required, min_length=3)):
    results = {"items": [{"item_id": "Foo"}, {"item_id": "Bar"}]}
    if q:
        results.update({"q": q})
    return results


@app.get("/items4/")
async def read_multiple_items(q: list[str] | None = Query(default=None)):
    query_items = {"q": q}
    return query_items


@app.get("/items5/")
async def read_items(q: list[str] = Query(default=["foo", "bar"])):
    query_items = {"q": q}
    return query_items
