from fastapi import FastAPI, Form

app = FastAPI()


# For example, in one of the ways the OAuth2 specification can be used (called "password flow")
# it is required to send a username and password as form fields.
@app.post("/login")
async def login(username: str = Form(), password: str = Form()):
    return {"username": username}
