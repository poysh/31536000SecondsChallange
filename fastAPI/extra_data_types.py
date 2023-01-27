from datetime import datetime, time, timedelta
from uuid import UUID

from fastapi import FastAPI, Body

app = FastAPI()


@app.put("/items/{item_id}")
async def read_items(
        item_id: UUID,
        start_datetime: datetime | None = Body(default=None),
        end_datetime: datetime | None = Body(default=None),
        repeat_at: time | None = Body(default=None),
        process_after: timedelta | None = Body(default=None),
):
    results = {"item_id": item_id}
    if start_datetime:
        start_process = start_datetime + process_after
        duration = end_datetime - start_process
        results.update({"start_datetime": start_datetime,
                        "end_datetime": end_datetime,
                        "repeat_at": repeat_at,
                        "process_after": process_after,
                        "start_process": start_process,
                        "duration": duration})
    return results
