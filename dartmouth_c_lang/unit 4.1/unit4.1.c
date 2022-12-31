#include <stdio.h>
void sum(int, int, int *);

int main(){
    int a = 3;
    int b = 3;
    int result;
    int * resultptr = &result;
    sum(a, b, resultptr);
    printf("Result: %d", result);
    return(0);
}

void sum(int a, int b, int * resultptr){
    * resultptr = a + b;
}