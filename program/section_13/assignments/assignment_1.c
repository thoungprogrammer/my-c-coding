#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// PROGRAM TO CHECK TWO INPUT EQUAL || NOT 

int main(void){
    int firstNumber;int secondNumber;
    printf(" ===== NUMBER COMPARE PROGRAM =====\n");
    printf("Enter the first number (must integer): \n> ");
    scanf("%d", &firstNumber);
    printf("Enter the second number (must integer): \n> ");
    scanf("%d", &secondNumber);
    printf((firstNumber == secondNumber)? "EQUAL":"NOT EQUAL");
    return 0;
}