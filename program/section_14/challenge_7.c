#include<stdio.h>

// PROGRAM THAT RECEIVES 3 INTEGERS IF THAT THREE INTEGER DIVIDE PRINT DIVISIBLE

int main(void){
    int threeNum;
    int firstNum;int secNum;int thirdNum;
    printf("Enter three integer number \n>");
    scanf("%d", &threeNum);
    firstNum = (threeNum % 10) % 10;
    thirdNum = threeNum / 100;
    secNum = (threeNum - thirdNum * 100) / 10;
    if (firstNum % secNum == 0 || secNum % thirdNum == 0 || firstNum % thirdNum == 0){
        printf("DIVIDER");
    }
    else {
        printf("CANNOT DIVIDE");
    }    
    return 0;
}