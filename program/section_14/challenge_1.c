#include<stdio.h>

// PROGRAM TO CHECK TWO NUMBER THE SAME OR NOT IF SAME PRINT TRUE OTHERWISE PRINT FALSE

int main(){
    int firstNum;
    int secondNum;
    printf("Enter first number: \n> ");
    scanf("%d",&firstNum);
    printf("Enter second number: \n> ");
    scanf("%d",&secondNum);
    if (firstNum == secondNum){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}