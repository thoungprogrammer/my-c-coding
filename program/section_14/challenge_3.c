#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<io.h>
#include<math.h>
// PROGRAM THAT RECEIVES AN INTEGER VALUE AND PRINT ITS ABSOLUTE VALUE
// EXAMPLE: -10 --> |10| = 10

int main(void){
    int negativeNum;
    int result;
    printf("Enter a negative integer number: \n> ");
    scanf("%d", &negativeNum);
    if (negativeNum >= 0){
        result = negativeNum;
    }
    else{
        result = negativeNum * -1;
    }
    printf("The result of  |%d| is %d", negativeNum, result);
    return 0;
}