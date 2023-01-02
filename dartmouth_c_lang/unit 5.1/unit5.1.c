#include <stdio.h>

struct student {
    char firstName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;
};

struct date {
    int year;
    int month;
    int day;
};

void printStudent(struct student stud);
void readDate(struct date*);
void printDate(struct date);
void readStudent(struct student*);

void printStudent(struct student stud)
{
    printf("Name: %s %s\n", stud.firstName, stud.lastName);
    printf("Year of birth: %d\n", stud.birthYear);
    printf("Average grade: %.2lf\n", stud.aveGrade);
}

void readDate(struct date* date)
{
    scanf("%d %d %d", &date->year, &date->month, &date->day);
}

void printDate(struct date date)
{
    printf("%02d/%02d/%4d\n", date.month, date.day, date.year); // fill with 0 on day and month if single digit
}

void readStudent(struct student* studptr)
{
    printf("\nEnter new student record\n");
    printf("First name: ");
    scanf("%s", studptr->firstName);
    printf("Last name: ");
    scanf("%s", studptr->lastName);
    printf("Year of birth: ");
    scanf("%d", &studptr->birthYear);
    printf("Average grade: ");
    scanf("%lf", &(*studptr).aveGrade);
}

int main(void)
{
    printf("%zu\n", sizeof(struct student));
    struct student me = { "Philip", "Daraei", 1989, 2.5 };
    printf("Size of firstName is %zu.\n", sizeof(me.firstName));
    struct student you;
    readStudent(&you);
    printStudent(me);
    printStudent(you);
    return 0;
}