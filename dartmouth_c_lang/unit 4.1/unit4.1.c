#include <stdio.h>

void sum(int, int, int*);
void pointerArethemic();
void printArray(int*, int);
void squareArray(int*, int);

int main()
{
    int a = 3;
    int b = 3;
    int result;
    int* resultptr = &result;
    sum(a, b, resultptr);
    printf("Result: %d\n", result);

    int array[] = { 6, 2, -4, 8, 5, 1 };
    //   int N = 6;
    int N = sizeof(array) / sizeof(int);
    printf("Size array in bytes %zu\n", sizeof(array));
    printf("Size array %d\n", N);
    printArray(array, N);
    squareArray(array, N);
    printArray(array, N);
    return (0);
}

void squareArray(int* ptr, int size)
{
    for (int i = 0; i < size; i++) {
        ptr[i] = ptr[i] * ptr[i];
    }
}

void printArray(int* ptr, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d: %d\n", i, *(ptr + i));
    }
}

void sum(int a, int b, int* resultptr) { *resultptr = a + b; }

void pointerArethemic()
{
    int array[] = { 6, 2, -4, 8, 5, 1 };
    int *ptr, *ptr2;

    printf("Array contains %d, %d, ... , %d\n", array[0], array[1], array[5]);
    printf("These are stored at %p, %p, ..., %p\n", &array[0], &array[1],
        &array[5]);
    // array equals &array[0]
    ptr = array;
    ptr2 = &array[0];

    *ptr = 10;
    *(ptr + 1) = 5;
    *(ptr + 2) = -1;

    *array = 3;
    *(array + 1) = 10;
    *(array + 2) = 99;

    ptr++;
    *ptr = 7;

    ptr += 3;
    *ptr = 8;
}