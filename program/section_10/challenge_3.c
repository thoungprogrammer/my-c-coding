#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// A PROGRAM TO CALCULATE THE TOTAL SALARY PER MONTH

int main(void){
    int totalDay;
    double salaryPerHours;
    double totalSalary;
    printf("==== TOTAL SALARIES CALCULATOR ====\n");
    printf("Please enter the salary (per hours): \n> ");
    scanf("%lf", &salaryPerHours);
    printf("Please enter the total day in the month: \n> ");
    scanf("%i", &totalDay);
    totalSalary = totalDay * salaryPerHours;
    printf("The total salary for this month is $ %.2lf\n", totalSalary);

    return 0;
}