//
//  main.c
//  xcode_c_test
//
//  Created by Philip Czymmek on 24.12.22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int secret, guess = 0, count = 0;
    scanf("%d", &secret);
    while(secret != guess) {
        scanf("%d", &guess);
        count++;
        if (guess > secret){
            printf("it is less\n");
        } else if (guess < secret){
            printf("it is more\n");
        }
    }
    printf("Number of tries needed\n%d", count);
    return 0;
}
