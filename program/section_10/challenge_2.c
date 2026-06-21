#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// A PROGRAM TO CALCULATE THE SUM OF THE SEQUENCE

int main(void){
    int a1,an,n,sn;
    printf("==== SUM OF THE SEQUENCE PROGRAM ====\n");
    printf("Please input the first term of the sequence (a1): \n> ");
    scanf("%d",&a1);
    printf("Please input the nth term of the sequence (an): \n> ");
    scanf("%d",&an);
    printf("Please input the position of the sequence (n): \n> ");
    scanf("%d",&n);
    sn =  (a1 + an) * n/2;
    printf("The sum of the sequence (sn) is %d.\n", sn);



    return 0;
}