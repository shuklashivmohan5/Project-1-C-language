// Q.2 Gross Salary Calculator.
// Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
// the base salary as chosen by the user.

#include <stdio.h>

int main(){
    float BaseSalary, HRA_Percentage, DA_Percentage, TA_Percentage;
    float HRA, DA, TA, GrossSalary;

    printf("Enter the base salary: ");
    scanf("%f", &BaseSalary);

    printf("Enter the HRA_Percentage: ");
    scanf("%f", &HRA_Percentage);

    printf("Enter the DA_Percentage: ");
    scanf("%f", &DA_Percentage);

    printf("Enter the TA_Percentage: ");
    scanf("%f", &TA_Percentage);

    HRA = (HRA_Percentage / 100)* BaseSalary;
    DA  = (DA_Percentage / 100) * BaseSalary;
    TA  = (TA_Percentage / 100) * BaseSalary;

    GrossSalary = BaseSalary + HRA + DA + TA;

    printf("Gross salary: Rs.%.2f",GrossSalary);

    return 0;
}