#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// PROGRAM TO READE USER IF USER INPUT POSITIVE PRINT 1 && NEGATIVE PRINT -1 && PRINT ZERO IS == 0

int main(void){
    int number ;
    printf("Enter a number to check: ");
    scanf("%d", &number);
    if (number > 0){
        printf("1");
    }
    else if(number < 0)
        printf("-1");
    else
        printf("0");
    return 0;
}