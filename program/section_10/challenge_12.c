#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// PROGRAM TO CALCULATE AND PRINT: X^2 , X^4 , X^6 , X^8 OF INTEGER "X"

int main(void){
    int number;
    int twoTime;
    int fourTime;
    int sixTime;
    int eightTime;
    printf("Enter a integer number: \n> ");
    scanf("%d", &number);
    twoTime = pow(number,2);
    fourTime = pow(number,4);
    sixTime = pow(number,6);
    eightTime = pow(number,8);
    printf("The square root of %d is:\n> %d^2 = %d\n> %d^4 = %d\n> %d^6 = %d\n> %d^8 = %d", number, number,twoTime,number,fourTime,number,sixTime,number,eightTime);
    return 0;
}