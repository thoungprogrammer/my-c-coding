#include<stdio.h>

// PRINT THE MONTH NAME BASE ON THE NUMBER I INPUT

int main(void){
    int choice;
    printf("Enter a number from (1 - 12) to see the month: \n> ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("The number %d stand for January",choice);
        break;
    case 2:
        printf("The number %d stand for February",choice);
        break;
    case 3:
        printf("The number %d stand for March",choice);
        break;
    case 4:
        printf("The number %d stand for April",choice);
        break;
    case 5:
        printf("The number %d stand for May",choice);
        break;
    case 6:
        printf("The number %d stand for June",choice);
        break;
    case 7:
        printf("The number %d stand for July",choice);
        break;
    case 8:
        printf("The number %d stand for August",choice);
        break;
    case 9:
        printf("The number %d stand for September",choice);
        break;
    case 10:
        printf("The number %d stand for October",choice);
        break;
    case 11:
        printf("The number %d stand for November",choice);
        break;
    case 12:
        printf("The number %d stand for December",choice);
        break;
    default:
        printf("Please enter the number from (1 - 12)!!!");
        break;
    }
    return 0;
}