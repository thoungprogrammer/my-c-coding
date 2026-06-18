#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// PROGRAM TO CONVERT THE INT TO FLOAT NUMBER

int main(void){

    int firstGrade;
    int secondGrade;
    int thirdGrade;
    printf("==== NUMBER CONVERTION PROGRAM ====\n");
    printf("Enter first number: \n> ");
    scanf("%i", &firstGrade);
    printf("Enter second number: \n> ");
    scanf("%i", &secondGrade);
    printf("Enter third number: \n> ");
    scanf("%i", &thirdGrade);
    printf("The value that you enter is %.2f %.2f %.2f", (float)firstGrade , (float)secondGrade , (float)thirdGrade);
    return 0;
}