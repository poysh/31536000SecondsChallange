from fastapi import FastAPI
from pydantic import BaseModel

app = FastAPI()


@app.get("/items/")
async def read_items(q: str | None = None):
    result = {"items": [{"item_id": "Foo"}, {"item_id": "Bar"}]}
    if q:
        result.update({"q": q})
    return result
