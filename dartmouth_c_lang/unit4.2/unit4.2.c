#include <stdio.h>

// PROTOTYPES
void multiDimesonalArrays();
void setToZero(short**);
void setup();

int main()
{
    multiDimesonalArrays();
    setup();
}

void multiDimesonalArrays()
{
    short a[3] = { 234, 655, 843 };
    short b[2] = { 12, 62 };
    short c[4] = { 3456, 3467, 23, 276 };
    short* arrays[3] = { a, b, c };
    *(arrays[0] + 1) = 5;
    arrays[0][1] = 0;
    printf("%i\n", *arrays[0]);
    printf("%i\n", *(arrays[0] + 1));
    printf("%i\n", *(arrays[1] + 1));
    printf("%i\n", arrays[2][1]);
}

void setup()
{
    short a[] = { 1245, 1924, 234 };
    short b[] = { 24, 256, 1024 };
    short* t[] = { a, b };
    setToZero(t);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d:%d=%d\n", i, j, t[i][j]);
        }
    }
}

void setToZero(short** t)
{
    *(*t) = 0; // t[0][0]  OR  *(t[0] + 0)
    *((*t) + 1) = 0; // t[0][1]  OR *(t[0] + 1)
    *((*t) + 2) = 0; // t[0][2]  OR *(t[0] + 2)
    *(*(t + 1)) = 0; // t[1][0]  OR *(t[1] + 0)
    *(*(t + 1) + 1) = 0; // t[1][1]  OR *(t[1] + 1)
}