#include <stdio.h>

int notSix(void){
    int diceValue;
    int notSix;
    scanf("%d", &diceValue);
    while (diceValue != 6) {
        scanf("%d", &diceValue);
    }
    return 0;
}

int printStars(void){
    int i, j;
    int n = 0;
    scanf("%d", &n);

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int collectSignatures(void){
    int signaturesNeeded = 1000;
    int day = 0;
    int newSignatures = 3;
    int totalSignatures = 3;
    while (totalSignatures < signaturesNeeded) {
        day++;
        newSignatures = 2*newSignatures;
        printf("Day %d: %d new signatures! ", day, newSignatures);
        totalSignatures = totalSignatures + newSignatures;
        printf("Total: %d\n", totalSignatures);
    }
    return 0;
}

int zombieInvasion(void){
    int population, days = 1, infected = 1;
    scanf("%d", &population);
    while (infected < population){
        printf("P: %d, i: %d, d: %d\n", population, infected, days);
        infected = infected + infected*2;
        printf("new infected: %d\n", infected);
        days++;
    }
    printf("total: %d\n", days);
    return 0;
}

int main(void){
    zombieInvasion();
}