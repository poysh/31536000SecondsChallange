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
int evaluateInput(void);
int calculateSize(int, char);
void breakDown(int);

int main(void){
    int size;
    char type;
    int result;
    
    scanf("%c%d", &type, &size);
    result = calculateSize(size, type);
    breakDown(result);
    return 0;
}

void breakDown(int size){
    if (size < 1000){
        printf("%d B", size);
    } else if(size < 1000000 ){
        printf("%d KB and %d B", size/1000, size%1000);
    } else if(size >= 1000000){
        printf("%d MB and %d KB and %d B", size/(1000 * 1000), (size/ 1000) % 1000, size%1000);
    }
}

int calculateSize(int count, char type){
    if (type == 'i'){
        return count * sizeof(int);
    }else if (type == 'c'){
        return count * sizeof(char);
    }else if (type == 's'){
        return count * sizeof(short);
    }else if (type=='d'){
        return count * sizeof(double);
    } else {
        return -1;
    }
}


//int main(int argc, const char * argv[]) {
//    int nLines, i;
//    int space, result;
//
//    scanf("%d", &nLines);
//    space = 0;
//    for(i = 0; i < nLines; i++){
//        result = evaluateInput();
//        if (result == -1) return 0;
//        else space = space + result;
//    }
//    printf("%d bytes", space);
//}

int evaluateInput(void){
    int size;
    char type;
    scanf(" %d %s", &size, &type);
    if(type == 'i'){
        return size * sizeof(int);
    } else if (type == 'c'){
        return size * sizeof(char);
    } else if (type == 'd'){
        return size * sizeof(double);
    } else {
        printf("Invalid tracking code type");
        return -1;
    }
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
