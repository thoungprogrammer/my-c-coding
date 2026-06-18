#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// A PROGRAM TO CAL REC PERIMETER

int main(void){
    float length;
    float width;
    float perimeter;
    printf("==== RECTANGLE PERIMETER PROGRAM ====\n");
    printf("Enter the length of the rectangle. \n> ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle. \n> ");
    scanf("%f", &width);
    perimeter = 2 * (length + width);
    printf("The parameter of the rectangle is %.2f\n", perimeter);
    return 0;
}