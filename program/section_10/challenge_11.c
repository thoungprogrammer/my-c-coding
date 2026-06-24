#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// PROGRAM TO CALCULATES THE DISTANCE BETWEEN 2 POINTS

int main(void){
    double x1,y1;
    double x2,y2;
    double distance;
    printf("===== DISTANCE CALCULATOR PROGRAM =====\n");
    printf("Please input the value of (x1 , y1): \n");
    printf("> ");
    scanf("%lf", &x1);
    printf("> ");
    scanf("%lf", &y1);
    printf("Please input the value of (x2 , y2): \n");
    printf("> ");
    scanf("%lf", &x2);
    printf("> ");
    scanf("%lf", &y2);
    distance = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
    printf("The distance between point (%.2lf , %.2lf) and (%.2lf , %.2lf) is %.2lf",x1,y1,x2,y2,distance);
    return 0;
}