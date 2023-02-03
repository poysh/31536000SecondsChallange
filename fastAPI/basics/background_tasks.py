from fastapi import BackgroundTasks, Depends, FastAPI


description = """
ChimichangApp API helps you do awesome stuff. 🚀

## Items

You can **read items**.

## Users

You will be able to:

* **Create users** (_not implemented_).
* **Read users** (_not implemented_).
"""

# app = FastAPI(docs_url="/documentation", redoc_url=None) disable
app = FastAPI(
    title="ChimichangApp",
    description=description,
    version="0.0.1",
    terms_of_service="http://example.com/terms/",
    contact={
        "name": "Deadpoolio the Amazing",
        "url": "http://x-force.example.com/contact/",
        "email": "dp@x-force.example.com",
    },
    license_info={
        "name": "Apache 2.0",
        "url": "https://www.apache.org/licenses/LICENSE-2.0.html",
    },
    openapi_url="/api/v1/openapi.json",
    # set schema location away from /openapi.json
)


def write_notifications(email: str, message =""):
    with open("log.txt", mode="a") as email_file:
        content = f"notification for {email}: {message}\n"
        email_file.write(content)


def write_log(message: str):
    with open("log2023.txt", mode='a') as log_file:
        log_file.write(message)


def get_query(background_task: BackgroundTasks, q: str | None = None):
    if q:
        message = f"found query: {q}\n"
        background_task.add_task(write_log, message)
    return q


@app.post("/send-notification/{email}")
async def send_notifications(email: str, message: str, background_tasks: BackgroundTasks, q: str = Depends(get_query)):
    background_tasks.add_task(write_notifications, email, message)
    background_tasks.add_task(write_log, message)
    return {"message": "Message sent"}
