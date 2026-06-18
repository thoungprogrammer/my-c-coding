#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// A PROGRAM TO CONVERT FAHRENHEIT TEMPERATURE TO CELCIUS

int main(void){
    float tempFah;
    float tempCel;
    printf("==== FAHRENHEIT TO CELCIUS CALCULATOR ====\n");
    printf("Enter the fahrenheit value: \n> ");
    scanf("%f", &tempFah);
    tempCel = (tempFah - 32)/1.8;
    printf("The value in celcius is %.2f\n", tempCel);
    return 0;
}