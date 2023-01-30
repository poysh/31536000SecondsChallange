from fastapi import FastAPI, status

app = FastAPI()


@app.post("/items/", status_code=201)
async def create_item(name: str):
    return {"name": name}


@app.post("/error/", status_code=status.HTTP_202_ACCEPTED)
async def create_item(name: str):
    return {"name": name}
