#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    digit * next;
};

struct digit * createDigit(int);

int main(){

    printf("Hello World");
    return 0;
}

struct digit * createDigit(int dig){
    struct digit newDig = malloc(sizeof(int));
    
}