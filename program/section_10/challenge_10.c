#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// PROGRAM TO PRINT THE REVERSE NUMBER OF THREE INPUT V2

int main(void){
    int number;
    int ones;
    int tens;
    int hundreds;
    int reverseNum;
    printf("==== REVERSE NUMBER PROGRAM V2 ====\n");
    printf("Enter three digit to reverse them: \n>");
    scanf("%d", &number);
    ones = (number % 100) % 10;
    tens = (number % 100) / 10;
    hundreds = number / 100;

    reverseNum = ones * 10 + tens;
    reverseNum = reverseNum * 10 + hundreds; 
    printf("The reverse number of %d is %d ", number,reverseNum);
    return 0;
}