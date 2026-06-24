#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// PROGRAM TO PRINT THE REVERSE NUMBER OF THREE INPUT 

int main(void){
    int number;
    int ones;
    int tens;
    int hundreds;
    printf("==== REVERSE NUMBER PROGRAM ====\n");
    printf("Enter three digit to reverse them: \n>");
    scanf("%d", &number);
    ones = (number % 100) % 10;
    tens = (number % 100) / 10;
    hundreds = number / 100;
    printf("The reverse number of %d is %d%d%d ", number,ones,tens,hundreds);
    return 0;
}