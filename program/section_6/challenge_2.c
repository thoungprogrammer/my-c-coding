#include<stdio.h>
#include<stdlib.h>

int main(void){
    int myAge = 21;
    char myFullName[] = "Morn Chanthoung";
    char myGender[] = "Male";
    printf("Full Name: %s", &myFullName);
    printf("Age: %i", &myAge);
    printf("Gender: %s", &myGender);
    return 0;
}