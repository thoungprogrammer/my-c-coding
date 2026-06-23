#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

// PROGRAM TO EXTRACT DECIMAL PART FROM NUMBER

int main(void){
    float floatNumber;
    float decimalPart;
    printf("==== DECIMAL PART EXTRACTOR PROGRAM ====\n");
    printf("Please enter a float number(positive number only): \n> ");
    scanf("%f", &floatNumber);
    decimalPart = floatNumber - (int)floatNumber;
    printf("The decimal part of %f is %f",floatNumber,decimalPart);
    return 0;
}