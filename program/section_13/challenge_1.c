#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// PROGRAM THE COMPARE BETWEEN TWO NUMBER EX: 2 > 1
int main(void){
    int firstNum;
    int secondNum;
    printf("===== FIND THE BIGGEST NUMBER PROGRAM =====\n");
    printf("Enter the first integer: \n> ");
    scanf_s("%d", &firstNum);
    printf("Enter the second integer: \n> ");
    scanf_s("%d", &secondNum);
    if ( firstNum > secondNum)
        printf("The maximum number is: %d \nand minimum number is: %d ",firstNum,secondNum);
    else
        printf("The maximum number is: %d \nand minimum number is %d",secondNum,firstNum);
    return 0;
}