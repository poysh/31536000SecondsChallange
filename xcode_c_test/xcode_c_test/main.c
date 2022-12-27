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

int main(int argc, const char * argv[]) {
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
    
    return 0;
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
