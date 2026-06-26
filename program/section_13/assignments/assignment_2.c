#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// PROGRAM TO CHECK THREE INPUT EQUAL || NOT 

int main(void){
    int firstNumber;int secondNumber;int thirdNumber;
    printf(" ===== NUMBER COMPARE PROGRAM =====\n");
    printf("Enter the first number (must integer): \n> ");
    scanf("%d", &firstNumber);
    printf("Enter the second number (must integer): \n> ");
    scanf("%d", &secondNumber);
    printf("Enter the third number (must integer): \n> ");
    scanf("%d", &thirdNumber);
    printf((firstNumber == secondNumber && firstNumber == thirdNumber )? "EQUAL":"NOT EQUAL");
    return 0;
}