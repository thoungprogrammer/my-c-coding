#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// PROGRAM TO CALCULATE THE TIME OF TRAVELING

int main(void){
    double vehicleSpeed;
    double goalDistance;
    double timeCal;
    printf("==== TIME OF TRAVELING PROGRAM ====\n");
    printf("Enter the speed of the vehicle (km/h): \n> ");
    scanf("%lf", &vehicleSpeed);
    printf("Enter the distance to travel (km): \n> ");
    scanf("%lf", &goalDistance);
    timeCal = goalDistance/vehicleSpeed;
    printf("The time to travel is %.2lf hour", timeCal);
    return 0;
}