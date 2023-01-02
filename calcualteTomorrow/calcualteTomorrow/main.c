//
//  main.c
//  calcualteTomorrow
//
//  Created by Philip Czymmek on 02.01.23.
//

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(int argc, const char * argv[]) {
    struct date today, tomorrow;
    readDate(&today);
    printDate(today);
    tomorrow = advanceDay(today);
    printDate(tomorrow);
    return 0;
}

/* add your function definitions here */
void printDate(struct date today)
{
    printf("%02d/%02d/%d\n", today.month, today.day, today.year);
}

void readDate(struct date * today)
{
    scanf("%d %d %d", &today->year, &today->month, &today->day);
}

struct date advanceDay(struct date today)
{
    struct date tomorrow;
    if (today.month == 1 || today.month == 3 || today.month == 5 || today.month == 7 ||
    today.month == 8 || today.month == 10 || today.month == 12){
        // 31 days
        if (today.day == 31 && today.month == 12){
            tomorrow.year = today.year + 1;
            tomorrow.month = 01;
            tomorrow.day = 01;
            return tomorrow;
        } else if (today.day == 31) {
            tomorrow.year = today.year;
            tomorrow.month = today.month + 1;
            tomorrow.day = 01;
            return tomorrow;
        } else {
            tomorrow.year = today.year;
            tomorrow.month = today.month;
            tomorrow.day = today.day + 1;
            return tomorrow;
        }
    } else if (today.month == 4 || today.month == 6 || today.month == 9 || today.month == 11){
        // 30 days
        if (today.day == 30) {
            tomorrow.year = today.year;
            tomorrow.month = today.month + 1;
            tomorrow.day = 01;
            return tomorrow;
        } else {
            tomorrow.year = today.year;
            tomorrow.month = today.month;
            tomorrow.day = today.day + 1;
            return tomorrow;
        }
    } else {
        // 28 days
        tomorrow.year = today.year;
        tomorrow.month = today.month + 1;
        tomorrow.day = 01;
        return tomorrow;
    }
}
