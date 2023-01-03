//
//  main.c
//  linkedList
//
//  Created by Philip Czymmek on 03.01.23.
//

#include <stdio.h>
#include <stdlib.h>

struct linkedPoint {
    int x;
    int y;
    struct linkedPoint* next;
};

void printPoints(struct linkedPoint* start);
struct linkedPoint* append(struct linkedPoint* end, struct linkedPoint* newpt);
struct linkedPoint* createPoint(int x, int y);
void freePoints(struct linkedPoint* start);

int main(int argc, const char * argv[])
{
    struct linkedPoint *start, *end, *newpt;
    int j, k;
    int x, y;
    printf("How many points: ");
    scanf("%d", &j);

    for (k = 0; k < j; k++) {
        printf("x = ");
        scanf("%d", &x);
        printf("y = ");
        scanf("%d", &y);
        newpt = createPoint(x, y);
        if (k == 0) {
            start = end = newpt;
        } else {
            end = append(end, newpt);
        }
    }
    
    printPoints(start);
    freePoints(start);
    return 0;
}

void printPoints(struct linkedPoint* start)
{
    while (start != NULL) {
        printf("(%d / %d)\n", start->x, start->y); // -> dereference pointer and get value from struct
        start = start->next;
    }
}

struct linkedPoint* append(struct linkedPoint* end, struct linkedPoint* newpt)
{
    end->next = newpt; // -> dereference 'end' address and go to 'next' field, write new ptr
    return (end->next);
}

struct linkedPoint* createPoint(int x, int y)
{
    struct linkedPoint* newpt = malloc(sizeof(struct linkedPoint));
    newpt->x = x;
    newpt->y = y;
    newpt->next = NULL;
    return newpt;
}

void freePoints(struct linkedPoint* start)
{
    struct linkedPoint* ptr = start;
    while (ptr != NULL) {
        start = ptr;
        ptr = ptr->next;
        free(start);
    }
}
