from fastapi import FastAPI, Header

app = FastAPI()


@app.get("/items/")
async def read_items(user_agent: str | None = Header(default=None)):
    return {"User-Agent": user_agent}


@app.get("/items2/")
async def read_tokens(x_token: list[str] | None = Header(default=None)):
    return {"X-Token values": x_token}