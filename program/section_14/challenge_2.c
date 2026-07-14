#include<stdio.h>

// PROGRAM TO CHECK THE NUMBER INPUT IS "DOUBLE-DIGIT" OR "TRIPLE-DIGIT"

int main(void){
    int digitVal;
    printf("Enter a two digits or three digit to check: \n> ");
    scanf("%d", &digitVal);
    if (digitVal> 9 && digitVal < 100){
        printf("You enter two digits number.");
    }
    else if ( digitVal > 99 && digitVal < 1000){
        printf("You enter three digits number.");
    }
    else{
        printf("You are enter the wrong digit please input two or three digits please.");
    }
    return 0;
}