from fastapi.testclient import TestClient

from .config import Settings

from .api import app, get_settings


client = TestClient(app)


def get_settings_override():
    return Settings(admin_email="2@3.de")


app.dependency_overrides[get_settings] = get_settings_override


def test_app():
    response = client.get("/info")
    data = response.json()
    assert data == {
        "app_name": "Awesome API",
        "admin_email": "2@3.de",
        "items_per_user": 50,
    }
