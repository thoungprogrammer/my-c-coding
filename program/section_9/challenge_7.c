#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// SWAP NUMBER PROGRAM

int main(void){
    float firstFloat;
    float secondFloat;
    float swapVar;
    printf("==== A PROGRAM USE FOR SWAP NUMBER ====\n");
    printf("Enter the first number: \n> ");
    scanf("%f", &firstFloat);
    printf("Enter the second number: \n> ");
    scanf("%f", &secondFloat);
    printf("\n==== BEFORE SWAP ====\n");
    printf("First number is: %.2f\n", firstFloat);
    printf("Second number is: %.2f\n\n", secondFloat);
    //-------------- SWAPING  TECHNIQUE FOR MY PROGRAM --------------// 
    swapVar = firstFloat;
    firstFloat = secondFloat; 
    secondFloat = swapVar;
    //---------------------------------------------------------------//
    printf("==== AFTER SWAP ====\n");
    printf("First number is: %.2f\n", firstFloat);
    printf("Second number is: %.2f\n\n", secondFloat);
    
    return 0;
}