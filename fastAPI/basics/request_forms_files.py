from fastapi import FastAPI, File, UploadFile, Form

app = FastAPI()


@app.post("/files/")
async def create_file(
        file: bytes = File(),
        fileb: UploadFile = File(),
        token: str = Form()
):
    return {
        "file_size": len(file),
        "token": token,
        "fileb_content_type": fileb.content_type,
    }
