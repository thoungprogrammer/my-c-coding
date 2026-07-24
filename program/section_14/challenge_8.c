#include<stdio.h>
#include<math.h>
#include<string.h>
#include<string.h>

// PROGRAM THAT CHECKS IF A GIVEN YEAR IS A LEAP YEAR OR NOT 

int main(void){
    int year;
    printf("Enter the year to check: \n> ");
    scanf("%d", &year);
    if (year % 400 == 0){
        printf("%d is a leap year!", year);
    }
    else if(year % 4 == 0){
        if (year % 100 == 0){
            printf("%d is not a leap year!", year);
        }
        else{
            printf("%d is a leap year!", year);
        }
    }
    else{
        printf("%d is not a leap year!", year);
    }
    return 0;
}