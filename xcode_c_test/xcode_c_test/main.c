//
//  main.c
//  xcode_c_test
//
//  Created by Philip Czymmek on 24.12.22.
//

#include <stdio.h>

double convertTemperature(double);
double convertWeight(double);
double convertDistance(double);
void converter(void);
int sumOfDigits(int);

/*
 Please write a C-program that uses a recursive function called "sumOfDigits()" to compute the sum of the digits of a number. To do so, your main function should first read an integer number as input and then call sumOfDigits(), which should in turn call itself until there are no digits left to sum, at which point the final sum should display to the user.

 Here is the main idea of how the recursion in sumOfDigits() should work:

 sumOfDigits(6452) = 2 + sumOfDigits(645)

 sumOfDigits(645) = 5 + sumOfDigits(64)
 */

int main(int argc, const char * argv[]) {
    int number;
    
    scanf("%d", &number);
    printf("%d", sumOfDigits(number));
}

int sumOfDigits(int n){
    if (n < 0){
        printf("%d is a negative number", n);
        return -1;
    } else if (n == 0) {
        return 0; // base case: if there are no digits left, return 0
    } else {
        return (n % 10) + sumOfDigits(n/10);
    }
}


void converter(){
    int nConversion;
    double num;
    char unit;
    int i;
    
    scanf("%d", &nConversion);
    printf("%d", nConversion);
    
    for(i = 0; i < nConversion; i++){
        double result;
        scanf("%lf %c", &num, &unit); // read char with " %c" otherwise world of pain
        printf("%c", unit);
        if (unit == 'c'){
            result = convertTemperature(num);
            printf("%.6lf f\n", result);
        } else if (unit == 'm') {
            result = convertDistance(num);
            printf("%.6lf ft\n", result);
        } else if(unit == 'g'){
            result = convertWeight(num);
            printf("%.6lf lbs\n", result);
        } else {
            printf("Conversion not possible\n");
        }
    }
}

// temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.
double convertTemperature(double celcius){
    return 32 + 1.8 * celcius;
}

//1 gram = 0.002205 pounds;
double convertWeight(double grams){
    return grams * 0.002205;
}

//1 meter = 3.2808 feet;
double convertDistance(double meters){
    return meters * 3.2808;
}
