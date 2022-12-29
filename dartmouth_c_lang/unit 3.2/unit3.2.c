#include <stdio.h>

int printSizeOf(void);

int printSizeOf(void){
    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[3];
    double listDouble[3];

    printf("char: %zu\n", sizeof(char));
    printf("int: %zu\n", sizeof(i));
    printf("double: %zu\n", sizeof(d));
    printf("[char]: %zu\n", sizeof(listChar));
    printf("[int]: %zu\n", sizeof(listInt));
    printf("[double]: %zu\n", sizeof(listDouble));
    return 0;
}

int memoryUsage(){
    char c;
    int num;
    int spacePer;
    int memory;
    int mega, kilo, byte;
    
    scanf("%c", &c);
    scanf("%d", &num);
    
    if (c=='c') spacePer = sizeof(char);
    else if (c=='s') spacePer = sizeof(short);
    else if (c=='i') spacePer = sizeof(int);
    else spacePer = sizeof(double);
    
    memory = spacePer*num;
    mega = memory/1000000;
    kilo = (memory-mega*1000000)/1000;
    byte = memory-mega*1000000-kilo*1000;
    
    if (mega>0){
        printf("%d MB and %d KB and %d B", mega, kilo, byte);
    } else if (kilo>0){
        printf("%d KB and %d B", kilo, byte);
    } else{ 
        printf("%d B", byte);
    }
        
    return 0;
}

int main(void){
    printSizeOf();
}