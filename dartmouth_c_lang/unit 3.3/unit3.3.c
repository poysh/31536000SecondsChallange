#include <stdio.h>

void getPointerAddress();
void dereferencePointer();
void swapVariable();
void reset(int*);
void resetArrayNotation(int[]);

void getPointerAddress()
{
    int a = 42;
    double b = 53.94;
    char c = 'p';

    int* addressOfA = &a;
    printf("address of %p\n", addressOfA);
    double* addressOfB = &b;
    printf("address of %p\n", addressOfB);
    char* addressOfC = &c;
    printf("address of %p\n", addressOfC);
}

void dereferencePointer()
{
    int a = 42;
    int* addressOfA = &a;
    printf("Address: %p, value at address: %d\n", addressOfA, *addressOfA);
    *addressOfA = 32;
    *addressOfA = *addressOfA + 1;
    printf("Address: %p, value at address: %d\n", addressOfA, *addressOfA);
}

void swapVariables(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int arrayAddress()
{
    int arr[3] = { 15, 16, 17 };
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
    printf("%p\n", arr);
    int* ptr = arr;
    *ptr = 2;
    *(ptr + 1) = 3; // pointer arithmetic
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

void setup()
{
    int arr[3] = { 15, 16, 17 };
    reset(arr);
    arr[0] = 15;
    arr[1] = 16;
    arr[2] = 17;
    resetArrayNotation(arr);
}

void reset(int* ptr)
{
    *(ptr + 0) = 0;
    *(ptr + 1) = 0;
    *(ptr + 2) = 0;
}

void resetArrayNotation(int ptr[])
{
    ptr[0] = 0;
    ptr[1] = 0;
    ptr[2] = 0;
}

int main()
{
    getPointerAddress();
    dereferencePointer();
    arrayAddress();
    setup();

    int a = 24;
    int b = 42;
    swapVariables(&a, &b);
    printf("a: %d, b: %d", a, b);
    return 0;
}