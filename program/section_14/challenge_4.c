#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<io.h>

// A PROGRAM TO DETERMINE THE QUADRANT POINT OF THE INPUT (X,Y)

int main(void){
    int xPosition;int yPosition;
    printf("Enter the X position: \n> ");
    scanf("%d", &xPosition);
    printf("Enter the Y position: \n> ");
    scanf("%d", &yPosition);
    if (xPosition >= 0 && yPosition >= 0){
        printf("The Quadrant of (%d,%d) is 1st Quadrant",xPosition,yPosition);
    }
    else if( xPosition >= 0 && yPosition < 0){
        printf("The Quadrant of (%d,%d) is 2st Quadrant",xPosition,yPosition);
    }
    else if( xPosition < 0 && yPosition < 0){
        printf("The Quadrant of (%d,%d) is 3st Quadrant",xPosition,yPosition);
    }
    else{
        printf("The Quadrant of (%d,%d) is 4st Quadrant",xPosition,yPosition);
    }
    return 0;
}