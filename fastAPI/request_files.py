from fastapi import FastAPI, File, UploadFile
from fastapi.responses import HTMLResponse

app = FastAPI()


@app.post("/files/")
async def create_file(files: list[bytes] | None = File(default=None)):
    if not files:
        return {"message": "No file sent"}
    else:
        return {"file_size": [len(file) for file in files]}


@app.post("/uploadfile/")
async def create_upload_file(file: UploadFile | None = None):
    return {"file_name": file.filename}


@app.post("/uploadfiles/")
async def create_upload_files(files: list[UploadFile]):
    return {"filesnames": [file.filename for file in files]}


@app.get("/")
async def main():
    content = """
<body>
<form action="/files/" enctype="multipart/form-data" method="post">
<input name="files" type="file" multiple>
<input type="submit">
</form>
<form action="/uploadfiles/" enctype="multipart/form-data" method="post">
<input name="files" type="file" multiple>
<input type="submit">
</form>
</body>
    """
    return HTMLResponse(content=content)
