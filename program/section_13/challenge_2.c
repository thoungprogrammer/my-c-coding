#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// MAKING A PROGRAM TO CHECK THE INTEGER ODD OR EVEN

int main(void){
    int number;
    printf("===== ODD OR EVEN CHECKER PROGRAM =====\n");
    printf("Please enter an integer to check: ");
    scanf("%d", &number);
    if (number % 2 == 0)
        printf("The number %d is a even number.", number);
    else
        printf("The number %d is a odd number.", number);
    return 0;
}