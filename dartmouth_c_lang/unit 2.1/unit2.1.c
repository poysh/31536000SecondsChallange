#include <stdio.h>
// #include "unit2.1.h"

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

    tugOfWar();
    
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