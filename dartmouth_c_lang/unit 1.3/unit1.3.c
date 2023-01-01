#include "unit1.3.h"
#include <stdio.h>

int downCast(void)
{
    double dOne, dTwo;
    int iOne, iTwo;
    printf("Please enter two decimals: ");
    scanf("%lf %lf", &dOne, &dTwo);
    printf("I read dOne = %lf, dTwo = %lf.\n", dOne, dTwo);
    iOne = (int)dOne;
    iTwo = (int)dTwo;
    printf("iOne = %d, iTwo = %d.\n", iOne, iTwo);
    printf("%d / %d = %d.\n", iOne, iTwo, iOne / iTwo);
    return 0;
}

int cementPrice(void)
{
    double amountCement;
    double cPrice;
    int price;
    scanf("%lf", &amountCement);
    cPrice = amountCement / 120.0 + 1;
    price = (int)cPrice * 45;
    printf("%d", price);
    return 0;
}

int main(void)
{
    char letter1 = 'i', letter2 = 'n', letter3 = 'C';
    printf("Programming %c%c %c\n", letter1, letter2, letter3);

    /*
    %d      -       integer (int)
    %c      -       char (char)
    %.2lf   -       long float (double) (rounded to 2 numbers after the .)
    */

    double height;
    height = 1.89;
    printf("I am %.2lf meters tall.\n", height);

    // integer division
    printf("5/2 equals %d\n", 5 / 2);
    // floating point division
    printf("5.0/2.0 equals %lf\n", 5.0 / 2.0);

    // casting
    int iOne = 4;
    double dOne;
    dOne = (double)iOne;
    printf("%.2lf\n", dOne);

    // downCast();
    // cementPrice();
    printf("%d", (int)2.66);

    return 0;
}