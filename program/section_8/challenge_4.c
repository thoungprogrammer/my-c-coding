#include<stdio.h>
#include<stdlib.h>

// PRINT THE YEAR THAT I WAS BORN

int main(void){
    int bornYear = 2006;
    int currentYear = 2026;
    int currentAge = currentYear - bornYear;
    printf("I was born in %d.\n", bornYear);
    printf("And now I am %d because %d - %d = %d.", currentAge,currentYear,bornYear,currentAge);
    return 0;
}