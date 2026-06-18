#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// CREATE A PROGRAM USING VARIABLE TO CALCULATE YEAR TO BORN

int main(void){
    int currentYear;
    int currentAge;
    int bornYear;

    printf("==== WELCOME TO YEAR PREDICTION PROGRAM ====\n");
    printf("Enter the current year. \n> ");
    scanf("%d", &currentYear);
    printf("Enter the current age. \n> ");
    scanf("%d", &currentAge);
    bornYear = currentYear - currentAge;
    printf("You are was born in %d\n", bornYear);
    return 0;
}