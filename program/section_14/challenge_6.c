#include<stdio.h>

// PROGRAM TO TAKE THE SECOND FROM THE USER AND CONVERT IT TO HH:MM:SS FORMAT 

int main(void){
    int seconds;
    int remainSecond;
    int minutes;
    int hours;
    printf("Enter the second number to convert to HH:MM:SS format\n> ");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remainSecond = (seconds % 3600) % 60;
    if( hours >= 10){
        printf("%d:", hours);
        if( minutes >= 10){
            printf("%d:", minutes);
            if( remainSecond >= 10){
                printf("%d", remainSecond);
            }
            else{
                printf("0%d", remainSecond);
            }
        }
        else{
            printf("0%d:", minutes);
            if( remainSecond >= 10){
                printf("%d", remainSecond);
            }
            else{
                printf("0%d", remainSecond);
            }
        }
    }
    else{
        printf("0%d:", hours);
        if( minutes >= 10){
            printf("%d:", minutes);
            if( remainSecond >= 10){
                printf("%d", remainSecond);
            }
            else{
                printf("0%d", remainSecond);
            }
        }
        else{
            printf("0%d:", minutes);
            if( remainSecond >= 10){
                printf("%d", remainSecond);
            }
            else{
                printf("0%d", remainSecond);
            }
        }
    }
    return 0;
}