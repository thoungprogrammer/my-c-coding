#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

// CALCULATOR USING SWITCH CASE 

int main(void){
    double firstNum;
    double secondNum;
    char userChoice;
    printf("    ++===== SIMPLE CALCULATOR =====++    \n");
    printf("        >>> Calculation Menu! <<<        ");
    printf("\n-------------------------------------------");
    printf("\n| [1]. Addition (+)                       |");
    printf("\n| [2]. Substraction (-)                   |");
    printf("\n| [3]. Multiplication (*)                 |");
    printf("\n| [4]. Division (/)                       |"); 
    printf("\n| [5]. Remainder (%)                      |");
    printf("\n-------------------------------------------\n");
    printf("Please choosing a choice for calculation (1-5): \n> ");
    scanf(" %c", &userChoice);
    printf("Please enter the first value: \n> ");
    scanf("%lf", &firstNum);
    printf("Please enter the second value: \n> ");
    scanf("%lf", &secondNum);

    switch (userChoice)
    {
        case '1':
            printf("The addition between %.2lf + %.2lf is %.2lf", firstNum,secondNum,firstNum+secondNum);
            break;
        case '2':
            printf("The substraction between %.2lf - %.2lf is %.2lf", firstNum,secondNum,firstNum-secondNum);
            break;
        case '3':
            printf("The multiplication between %.2lf * %.2lf is %.2lf", firstNum,secondNum,firstNum*secondNum);
            break;
        case '4':
            printf("The division between %.2lf / %.2lf is %.2lf", firstNum,secondNum,firstNum/secondNum);
            break;
        case '5':
            printf("The division between %.2lf %% %.2lf is %.2lf", firstNum,secondNum,fmod(firstNum,secondNum));
            break;        
        default:
            printf("You are enter the wrong input. Please choose number between 1 to 5 !!!");
            break;
    }
    return 0;
}