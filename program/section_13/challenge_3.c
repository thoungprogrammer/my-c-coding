#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// PROGRAM TO COMPARE THREE NUMBER 

int main(void){
    int firstNum;
    int secondNum;
    int thirdNum;
    printf("===== NUMBER COMPARE PROGRAM =====\n");
    printf("Enter three number to compare: \n");
    printf("> ");
    scanf("%d", &firstNum);
    printf("> ");
    scanf("%d", &secondNum);
    printf("> ");
    scanf("%d", &thirdNum);
    if (firstNum > secondNum && firstNum > thirdNum){
        printf("The maximum number is %d.\n",firstNum);
        printf("The minimum number is %d.\n",thirdNum);
    }
    else if (secondNum > firstNum && secondNum > thirdNum){
        printf("The maximum number is %d.\n",secondNum);
        printf("The minimum number is %d.\n",thirdNum);
    }
    else {
        printf("The maximum number is %d.\n",thirdNum);
        if (firstNum > secondNum)
            printf("The minimum number is %d.\n",secondNum);
        else
            printf("The minimum number is %d.\n",firstNum);
    }
    return 0;
}