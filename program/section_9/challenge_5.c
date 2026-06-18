#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// TEMPERATURE CONVERT FROM CELSIUS DEGREES TO FARENHEIT DEGREES

int main(void){
    float tempCel;
    float tempFah;
    printf("==== WELCOME TO CELSIUS CONVERTOR ====\n");
    printf("Enter you temperature in Celcius: \n> ");
    scanf("%f", &tempCel);
    tempFah = tempCel * 1.8 + 32;
    printf("The temperature in Fahrenheit is %.2f\n", tempFah);
    return 0;
}