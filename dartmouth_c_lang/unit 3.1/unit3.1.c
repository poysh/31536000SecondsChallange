#include <stdio.h>

//function PROTOTYPE
int sum(int, int);
void printLine(int, char);
void printTriangle(int, char);
void printSmallest(void);

int main(void){
    int a,b;
    int result;

    scanf("%d%d", &a, &b);
    result = sum(a, b); //ARGUMENTS
    printf("%d\n", result);

    printTriangle(result, '*');
    return 0;
}

int sum(int x, int y){ //PARAMETERS
    return x+y;
}

void printLine(int nLines, char pattern){
    int i;
    int j;
    
    for(i = 0; i < nLines; i++){
        printf("%c", pattern);
    }
    printf("\n");
}

void printTriangle(int nLines, char pattern){
    int line, count;
    for(line = 0; line < nLines; line++){
        count = line + 1;
        printLine(count, pattern);
    }
}

void printSmallest(void){
    int nNumbers;
    int current;
    int i;
    int smallest = 999;
    
    scanf("%d", &nNumbers);
    for (i = 0; i < nNumbers; i++){
        scanf("%d", &current);
        smallest = min(current, smallest);
    }
    printf("%d", smallest);
}

int min(int x, int y){
    return x > y ? y : x;
}