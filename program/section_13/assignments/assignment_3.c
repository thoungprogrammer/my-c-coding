#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// PROGRAM TO CHECK THREE AND TELL IS IT ASCENDING || NOT 

int main(void){
    int myNumber;
    int units;int tens;int hundreds;
    printf("===== ASCENDING OR NOT PROGRAM CHECKER =====\n");
    printf("Enter three digits integer numebr to check (ex.123): \n> ");
    scanf("%d",&myNumber);
    units = (myNumber % 100) % 10;
    tens = (myNumber % 100) / 10;
    hundreds = (myNumber) / 100;
    // printf("%d is %d %d %d", myNumber,hundreds,tens,units);
    printf((units>hundreds && units > tens)?"ASCENDING(%d<%d<%d)":"NOT ASCENDING",hundreds,tens,units);
    return 0;
}