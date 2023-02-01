async def get_db():
    db = DBSession()
    try:
        yield db
    finally:
        db.close()


from fastapi import Depends


async def dependency_a():
    dep_a = generate_dep_a()
    try:
        # if raising exceptions including HTTPException before the yield, BUT NOT AFTER
        yield dep_a
    finally:
        dep_a.close()


async def dependency_b(dep_a=Depends(dependency_a)):
    dep_b = generate_dep_b()
    try:
        yield dep_b
    finally:
        dep_b.close(dep_a)


async def dependency_c(dep_b=Depends(dependency_b)):
    dep_c = generate_dep_c()
    try:
        yield dep_c
    finally:
        dep_c.close(dep_b)


# Context Managers to be used in a 'with' statement
with open("./somefiles.txt") as f:
    contents = f.read()
    print(contents)
