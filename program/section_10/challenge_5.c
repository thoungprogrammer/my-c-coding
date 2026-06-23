#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

// MINUTE CONVERT TO TIME FORMAT PROGRAM 

int main(void){
    int seconds;
    int minutes;
    int hours;
    int remainSeconds;
    printf("==== SECOND CONVERT TO TIME FORMAT PROGRAM ====\n");
    printf("Enter the second: \n> ");
    scanf("%i", &seconds);
    hours = seconds / 3600;
    minutes = ( seconds % 3600 ) / 60; 
    remainSeconds = ((seconds % 3600) % 60);
    printf("The %i minutes is %02i:%02i:%02i in time format",seconds,hours,minutes,remainSeconds);
    return 0;
}
