# import os
#
# name = os.getenv("MY_NAME", 'World')
# print(f"Hello {name} from Python")


from fastapi import FastAPI
from pydantic import BaseSettings


class Settings(BaseSettings):
    app_name: str = "Awesome API"
    admin_email: str
    items_per_user: int = 50


settings = Settings()
app = FastAPI()


@app.get("/info", response_model=Settings)
async def get_info():
    return {
        "app_name": settings.app_name,
        "admin_email": settings.admin_email,
        "items_per_user": settings.items_per_user,
    }

