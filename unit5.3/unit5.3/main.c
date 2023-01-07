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
struct digit* append(struct digit* pt1, struct digit* pt2);
void freeList(struct digit* start);
void printList(struct digit* start);
struct digit* readNumber(void);
int divisibleByThree(struct digit* start);
struct digit* searchNumber(struct digit* start, int searchNum);
int changeThrees(struct digit* start);
struct digit* insertAtFront(struct digit* start, struct digit* newptr);
struct digit* reverseNumber(struct digit* start);

int main(int argc, const char* argv[])
{
    struct digit *start, *ptr, *backwards;
    start = readNumber();
    printList(start);
    if (divisibleByThree(start))
        printf("is divisible by 3.\n");
    else
        printf("is not divisible by 3.\n");
    int searchNum;
    scanf("%d", &searchNum);
    ptr = searchNumber(start, searchNum);
    if (ptr != NULL) {
        printf("Found digit %d at location %p.\n", searchNum, ptr);
    } else {
        printf("Digit %d not found.\n", searchNum);
    }
    backwards = reverseNumber(start);
    printList(backwards);
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

struct digit* append(struct digit* end, struct digit* newDigitptr)
{
    end->next = newDigitptr;
    //    end = newDigitptr;
    return (newDigitptr);
}

void freeList(struct digit* start)
{
    struct digit* ptr = start;
    struct digit* tmp;
    while (ptr != NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

void printList(struct digit* start)
{
    struct digit* ptr = start;
    while (ptr != NULL) {
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
    while (c != '\n') {
        d = c - 48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return start;
}

int divisibleByThree(struct digit* start)
{
    struct digit* tmp = start;
    int sum = 0;
    while (tmp != NULL) {
        sum += tmp->num;
        tmp = tmp->next;
    }
    printf("%d", sum);
    if (sum % 3 == 0) {
        return 1;
    } else {
        return 0;
    }
}

struct digit* searchNumber(struct digit* start, int searchNum)
{
    struct digit* ptr = start;
    while ((ptr != NULL) && (ptr->num != searchNum)) {
        ptr = ptr->next;
    }
    return ptr;
}

int changeThrees(struct digit* start)
{
    int counter = 0;
    struct digit* ptr = start;
    while (ptr != NULL) {
        if (ptr->num != 3) {
            ptr = ptr->next;
        } else {
            ptr->num = 9;
            ptr = ptr->next;
            counter++;
        }
    }
    return counter;
}

struct digit* insertAtFront(struct digit* start, struct digit* newptr)
{
    newptr->next = start;
    return (newptr);
}

struct digit* reverseNumber(struct digit* start)
{
    struct digit* ptr = start;
    struct digit* bstart = NULL;
    struct digit* newdigit;

    if (start != NULL) {
        bstart = createDigit(start->num);
        ptr = ptr->next;
    }
    while (ptr != NULL) {
        newdigit = createDigit(ptr->num);
        bstart = insertAtFront(bstart, newdigit);
        ptr = ptr->next;
    }
    return (bstart);
}
