from pydantic import BaseSettings


class Settings(BaseSettings):
    app_name: str = "Awesome API"
    admin_email: str
    items_per_user: int = 50

    class Config:
        env_file = ".env"
        env_file_encoding = 'utf-8'


# https://docs.pydantic.dev/usage/settings/#environment-variable-names
# Secret passwords
