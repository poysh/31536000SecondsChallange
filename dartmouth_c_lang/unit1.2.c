#include <stdio.h>
#include "unit1.2.h"

int main(void){
    printf("Dear Procastiantor,\n");
    printf("You still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!", (25-23), (60 * 24 * (25-23)), (60*(60 * 24 * (25-23))));
    robotSim();
    // hazelnutTraveler();
    // ageQuestion();
    return 0;
}

int hazelnutTraveler(void){
    int numberOfHazelnuts = 0;
    int distanceTraveled = 0;
    for(int i = 0; i < 9 ; i++) {
        printf("At %d miles I have %d hazelnuts.\n", distanceTraveled, numberOfHazelnuts);
        distanceTraveled = distanceTraveled + 1;
        numberOfHazelnuts = numberOfHazelnuts + 3;
    }
    return 0;
}

void ageQuestion(){
    int first, second, third;
    printf("What's your your 3 favourite numbers: ? (last separated by a comma)");
    scanf("%d%d,%d",&first, &second, &third); //note the comma in the format string
    printf("Your fav is %d %d %d!\n", first, second, third);
}

void robotSim(void){
    int i, count, enginePower, resistance, weight, height, sum = 0;
    printf("%d", sum);
    scanf("%d", &count);
    for(i = 0; i < count; i++){
        scanf("%d%d%d%d", &weight, &height, &enginePower, &resistance);
        // printf("%d, %d, %d, %d", weight, height, enginePower, resistance);
        sum = sum + (enginePower + resistance) * (weight - height);
    }
    printf("%d\n", sum);
}