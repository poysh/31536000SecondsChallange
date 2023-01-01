#include <stdio.h>

// function PROTOTYPE
int sum(int, int);
void printLine(int, char);
void printTriangle(int, char);
void printSmallest(void);
int min(int, int);
int factorialRec(int);
void factorial(int);
int fibonacci(int);

int main(void)
{
    int a, b;
    int result;

    scanf("%d%d", &a, &b);
    result = sum(a, b); // ARGUMENTS
    printf("%d\n", result);

    // printTriangle(result, '*');

    factorial(result);

    // printf("\n%d\n", factorialRec(result));

    printf("%d", fibonacci(result));

    return 0;
}

int sum(int x, int y)
{ // PARAMETERS
    return x + y;
}

void printLine(int nLines, char pattern)
{
    int i;
    int j;

    for (i = 0; i < nLines; i++) {
        printf("%c", pattern);
    }
    printf("\n");
}

void printTriangle(int nLines, char pattern)
{
    int line, count;
    for (line = 0; line < nLines; line++) {
        count = line + 1;
        printLine(count, pattern);
    }
}

void printSmallest(void)
{
    int nNumbers;
    int current;
    int i;
    int smallest = 999;

    scanf("%d", &nNumbers);
    for (i = 0; i < nNumbers; i++) {
        scanf("%d", &current);
        smallest = min(current, smallest);
    }
    printf("%d", smallest);
}

int min(int x, int y)
{
    return x > y ? y : x;
}

void factorial(int n)
{
    int i;
    int facto;

    facto = 1;
    for (i = 1; i <= n; i++) {
        facto = i * facto;
    }
    printf("%d", facto);
}

int factorialRec(int n)
{
    if (n == 0) {
        return 1;
    } else {
        return n * factorialRec(n - 1);
    }
}

// Fibonacci numbers: 0 1 1 2 3 5 8 13 21 34
int fibonacci(int n)
{
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}