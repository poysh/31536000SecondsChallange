#include <stdio.h>
#include <stdlib.h>

void mallocFreeAction();
int* allocateIntArray(int);
void dynamicArrays();
double findAverage(int*, int);

int* allocateIntArray(int size)
{
    return ((int*)malloc(size * sizeof(int)));
}

void dynamicArrays()
{
    int num, i;
    int* array;
    double average;
    printf("How many grades would you like to enter? ");
    scanf("%d", &num);
    array = allocateIntArray(num);
    printf("Please enter %d grades: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &array[i]);
    }
    average = findAverage(array, num);
    printf("%.2lf\n", average);
    for (i = 0; i < num; i++) {
        printf("Grade %d: %d\n", i + 1, array[i]);
    }
    free(array);
}

double findAverage(int* ptr, int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += ptr[i];
    }
    return sum / size;
}

void mallocFreeAction()
{
    int* intptr;
    double* doubleptr;
    intptr = (int*)malloc(sizeof(int));
    *intptr = 5;
    doubleptr = (double*)malloc(sizeof(double));
    *doubleptr = 9.42;
    int* p1 = malloc(4 * sizeof(int)); // allocates enough for an array of 4 int
    int* p2 = malloc(sizeof(int[4])); // same, naming the type directly
    int* p3 = malloc(4 * sizeof *p3); // same, without repeating the type name

    if (p1) {
        for (int n = 0; n < 4; ++n) // populate the array
            p1[n] = n * n;
        for (int n = 0; n < 4; ++n) // print it back out
            printf("p1[%d] == %d\n", n, p1[n]);
    }

    free(p1);
    free(p2);
    free(p3);
    free(intptr);
    free(doubleptr);
}

int main()
{
    dynamicArrays();
    mallocFreeAction();
    return 0;
}