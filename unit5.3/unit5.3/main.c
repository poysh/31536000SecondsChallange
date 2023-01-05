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
struct digit* readNumber(void);

int main(int argc, const char* argv[])
{
    struct digit *start;
    start = readNumber();
    printList(start);
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

struct digit* readNumber()
{
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c!='\n') {
        d = c - 48;
        newptr = createDigit(d);
        if (start == NULL){
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return start;
}
