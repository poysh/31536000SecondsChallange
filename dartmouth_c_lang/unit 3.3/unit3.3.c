#include <stdio.h>

void getPointerAddress();
void dereferencePointer();

void getPointerAddress(){
    int a = 42;
    double b = 53.94;
    char c = 'p';

    int * addressOfA = &a;
    printf("address of %p\n", addressOfA);
    double * addressOfB = &b;
    printf("address of %p\n", addressOfB);
    char * addressOfC = &c;
    printf("address of %p\n", addressOfC);
}

void dereferencePointer(){
    int a = 42;
    int * addressOfA = &a;
    printf("Address: %p, value at address: %d\n", addressOfA, *addressOfA);
    * addressOfA = 32;
    * addressOfA = * addressOfA + 1;
    printf("Address: %p, value at address: %d\n", addressOfA, *addressOfA);
}

int main(){
    getPointerAddress();
    dereferencePointer();
    return 0;
}