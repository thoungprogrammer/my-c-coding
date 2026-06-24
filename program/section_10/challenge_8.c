#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// PROGRAM TO SUM THE NUMBER TOGETHER

int main(void){
    int number;
    int ones;
    int tens;
    int hundreds;
    int totalSum;
    printf("==== SUMMING NUMBER TOGETHER PROGRAM ====\n");
    printf("Enter three digit to sum them up: \n>");
    scanf("%d", &number);
    ones = (number % 100) % 10;
    tens = (number % 100) / 10;
    hundreds = number / 100;
    totalSum = hundreds + tens + ones;
    printf("The total sum of %d is %d + %d + %d equal to %d", number, hundreds,tens,ones, totalSum);
    return 0;
}