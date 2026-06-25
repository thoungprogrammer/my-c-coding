#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// PROGRAM TO CHECK THE GRADE OF THE STUDENT 

int main(void){
    int grade;
    printf("===== STUDENT GRADE CHECKER PROGRAM =====\n");
    printf("Enter your score to get the message: \n");
    printf("> ");
    scanf("%d", &grade);
    if (grade >= 80)
        printf("Excellent Job!");
    else if (grade >= 60 && grade <= 80)
        printf("Not bad...");
    else
        printf("Oh...You didn't pass!");
    return 0;
}