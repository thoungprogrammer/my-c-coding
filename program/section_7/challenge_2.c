#include<stdio.h>
#include<stdlib.h>
/*
------------------------------------------------
 * Write a program that will print on the screen
 * the results of 5 mathematical operation: 
 * - Addition(+)
 * - Substraction(-)
 * - Multiplication(*)
 * - Division(/)
 * - Remainder(%) 
------------------------------------------------
 */
int main(void){
    int firstNumber = 6; 
    int secondNumber = 2;
    printf(" ======= 5 MATHEMATIC OPERATION PROGRAM =======\n");
    printf("- Addition(+): %d + %d = %d\n",firstNumber,secondNumber,firstNumber + secondNumber);
    printf("- Substraction(-): %d - %d = %d\n",firstNumber,secondNumber,firstNumber - secondNumber);
    printf("- Multiplication(*): %d * %d = %d\n",firstNumber,secondNumber,firstNumber * secondNumber);
    printf("- Division(/): %d / %d = %.2f\n",firstNumber,secondNumber,firstNumber / (float)secondNumber);
    printf("- Remainder(%) : %d %% %d = %d\n",firstNumber,secondNumber,firstNumber % secondNumber);
    return 0;

}