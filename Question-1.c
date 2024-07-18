// Q.1 Temperature Converter.
// Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
// formula: °F = (9/5 × °C) + 32

#include <stdio.h>

int main(){
    float celsius;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit  = (9.0/5.0) * celsius + 32.0;

    printf("The temperature in Fahrenheit: %.2f",fahrenheit);

    return 0;
}