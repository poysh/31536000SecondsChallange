from fastapi import FastAPI, Cookie

app = FastAPI()


@app.get("/items/")
async def read_items(ads_id: int | None = Cookie(default=None)):
    return ({"ads_id": ads_id})
