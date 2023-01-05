//
//  main.c
//  unit5.3
//
//  Created by Philip Czymmek on 04.01.23.
//

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit* next;
};

struct digit* createDigit(int);
struct digit* append(struct digit * pt1, struct digit * pt2);
void freeList(struct digit * start);
void printList(struct digit * start);

int main(int argc, const char* argv[])
{
    struct digit *newDigitptr, *start, *end;
    int first = 5;
    int second = 7;
    int third = 9;
    start = createDigit(first);
    end = start;
    newDigitptr = createDigit(second);
    end = append(end, newDigitptr);
    newDigitptr = createDigit(third);
    end =  append(end, newDigitptr);
    
    printList(start);
    
    printf("\nWe are storing %d at address %p", newDigitptr->num, newDigitptr);
    freeList(start);

    return 0;
}

struct digit* createDigit(int dig)
{
    struct digit* ptr = malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit* append(struct digit * end, struct digit * newDigitptr)
{
    end->next = newDigitptr;
//    end = newDigitptr;
    return(newDigitptr);
}

void freeList(struct digit * start){
    struct digit *ptr = start;
    struct digit *tmp;
    while (ptr != NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;

    }
}

void printList(struct digit * start){
    struct digit *ptr = start;
    while(ptr != NULL){
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
}
