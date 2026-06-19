#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// A PROGRAM TO SOLVE SEQUENCE EXERCISE 

int main(void){
    int a1,n,d,answer;
    printf("==== SEQUENCE ANSWER CHECKING ====\n");
    printf("Enter the first number \"a1\" of sequence : \n> ");
    scanf("%i", &a1);
    printf("Enter the \"n\" time of squence: \n> ");
    scanf("%i", &n);
    printf("Enter the step value \"d\" of each number: \n> ");
    scanf("%i", &d);
    printf("By follow the n-th Term of Arithmetis Sequence \"an = (n-1)*d\" the answer would be: \n"  );
    answer = a1+ (n-1)*d;
    printf("> %i\n", answer);
    return 0;
}