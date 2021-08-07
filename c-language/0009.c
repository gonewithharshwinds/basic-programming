// Author : gonewithharshwinds
// Program : Gross Salary of an Employee
// Date : August 2021

//Gross Salary = base + DA + HRA + MA. 
//Deduction = Gross Salary - Pf - Pt - It. 
//Net Salary = Gross Salary - Deduction. 

#include <stdio.h>

int main()
{
    float gross,base,da,hra,da1,hra1;

    printf("\nEnter base salary : ");
    scanf("%f", &base);
    printf("\nEnter DA : ");
    scanf("%f", &da1);
    printf("\nEnter HRA : ");
    scanf("%f", &hra1);
    da = (da1 * base)/100;
    hra = (hra1 * base)/100;
    gross = base + da + hra;
    printf("\n Gross Salary will be %f\n",gross);
    return 0;
}