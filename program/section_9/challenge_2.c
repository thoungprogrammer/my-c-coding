#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// A PROGRAM TO CALCULATE THE AREA OF THE RECTANGLE

int main(void){
    double recHeight;
    double recWidth;
    double recArea;
    printf("==== AREA RECTANGEL CALCULATOR ====\n");
    printf("Enter the height of the rectangle. \n> ");
    scanf("%lf", &recHeight);
    printf("Enter the width of the rectangle. \n> ");
    scanf("%lf", &recWidth);
    recArea = recHeight * recWidth;
    printf("The are of the rectangle is %.2lf\n", recArea);
    return 0;
}