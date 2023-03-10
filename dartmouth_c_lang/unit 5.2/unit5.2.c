#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

struct linkedPoint {
    int x;
    int y;
    struct linkedPoint* next;
};

void readPoint(struct point* ptr);
void printPoint(struct point pt);
void printPoly(struct point* ptr, int verticies);
void printPoints(struct linkedPoint* start);
struct linkedPoint* append(struct linkedPoint* end, struct linkedPoint* newpt);
struct linkedPoint* createPoint(int x, int y);
void freePoints(struct linkedPoint* start);

int main()
{
    int i, num;
    struct point z;
    struct point* polygon;

    // struct linkedPoint pt1 = { 1, 2, NULL };
    // struct linkedPoint pt2 = { 2, 3, NULL };
    // struct linkedPoint pt3 = { 3, 1, NULL };

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
        if (i == 0) {
            start = end = newpt;
        } else {
            end = append(end, newpt);
        }
    }

    // start = end = &pt1; // right to left assignment
    // end = append(end, &pt2); // & reference to address
    // end = append(&pt2, &pt3);
    // pt1.next = &pt2; // access field and write new value to it
    // pt2.next = &pt3;

    printPoints(start);
    freePoints(start);

    printf("How many vertices does your polygon have? ");
    scanf("%d", &num);
    polygon = (struct point*)malloc(num * sizeof(struct point));
    // struct point triangle[3];
    for (i = 0; i < num; i++) {
        readPoint(&polygon[i]);
    }
    printPoly(polygon, num);
    readPoint(&z);
    printPoint(z);

    free(polygon);
    return 0;
}

void readPoint(struct point* ptr)
{
    scanf("%d %d", &ptr->x, &ptr->y);
}

void printPoint(struct point pt)
{
    printf("x: %d, y: %d\n", pt.x, pt.y);
}

void printPoly(struct point* ptr, int verticies)
{
    for (int i = 0; i < verticies; i++) {
        printPoint(ptr[i]);
    }
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