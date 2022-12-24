#include <stdio.h>
// #include "unit2.1.h"

#define FREEAGE 60

int hostelPrices(void){
    int age, luggage;
    scanf("%d%d", &age, &luggage);
    if(age == FREEAGE){
        printf("0");
    } else if(age < 10){
        printf("5");
    } else if(luggage > 20 && age != 60){
        printf("40");
    } else {
        printf("30");
    }
    return 0;
}

int tugOfWar(void){
    int numberOfPlayers;
    int sumTeamA = 0, sumTeamB = 0, weightA, weightB;
    // get number of players per team
    scanf("%d", &numberOfPlayers);
    // get weights for teams
    for(int i = 0; i < numberOfPlayers*2; i++){
        if(i%2){
            scanf("%d", &weightB);
            sumTeamB = sumTeamB + weightB;
        } else {
            scanf("%d", &weightA);
            sumTeamA = sumTeamA + weightA;
        }
    }
    
    if(sumTeamA > sumTeamB){
        printf("Team 1 has an advantage\n");
    } else {
        printf("Team 2 has an advantage\n");
    }
    
    printf("Total weight for team 1: %d\n", sumTeamA);
    printf("Total weight for team 2: %d\n", sumTeamB);
    return 0;
}

int logicalAnd(void){
    int sunny = 1;
    int vacation = 1;
    int sunAndVacation = sunny && !vacation;
    if(sunAndVacation){
        printf("yeaaaaah\n");
    } else {
        printf("too bad\n");
    }
    return 0;
}

int logicalOr(void){
    int sunny = 1;
    int vacation = 0;
    int sunOrVacation = sunny || vacation;
    printf("%d (0 False, all others True)\n", sunOrVacation);
    return 0;
}

int main(void) {
    //FALSE : 0  0.0  
    //TRUE : all the other values (positive or even negative)
    int weatherIsGood = 0;
    if(weatherIsGood){
        printf("The weather is good!\n");
    } else {
        printf("The weather is not so good\n");
    }
    
    // + - * / % : arithmetic operators
    // < > <= >= != == : comparison operators
    int a = 4;
    int b = 4;
    int result;
    result = a == b;
    printf("result is %d\n", result);
    if( a == b){
        printf("A is equal to B\n");
    } else {
        printf("A is not equal to B\n");
    }
    
    int arr[3];
    arr[0] = 1;
    arr[2] = 2;
    arr[1] = 6;
    
    printf("1: %d, 2: %d, 3: %d\n", arr[0], arr[1], arr[2]);
    
    int readValue;
    int array[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &array[i]);
        // array[i] = readValue;
    }
    printf("1: %d, 2: %d, 3: %d\n", array[0], array[1], array[2]);
    
    double arr1[2];
    arr1[0] = 2.0;
    arr1[1] = 6.6;

    // tugOfWar();
    // logicalAnd();
    // logicalOr();
    
    int numberOfPassengers;
    double gasPrice;
    scanf("%d %lf", &numberOfPassengers, &gasPrice);
    if(numberOfPassengers == 0){
        printf("%.2lf", gasPrice);
    } else {
        gasPrice = gasPrice + 1.0;
        numberOfPassengers = numberOfPassengers + 1;
        printf("%.2lf", gasPrice / numberOfPassengers);
    }
    
    return 0;
}