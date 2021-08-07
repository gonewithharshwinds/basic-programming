// Author : gonewithharshwinds
// Program : Percentage of 5 Subjects
// Date : August 2021

#include <stdio.h>

int main()
{
    float a,b,c,d,e,F;

    printf("\nEnter Maximum marks possible : ");
    scanf("%f", &F);
    printf("\nEnter first subject marks : ");
    scanf("%f", &a);
    printf("\nEnter second subject marks : ");
    scanf("%f", &b);
    printf("\nEnter third subject marks : ");
    scanf("%f", &c);
    printf("\nEnter fourth subject marks : ");
    scanf("%f", &d);
    printf("\nEnter fifth subject marks : ");
    scanf("%f", &e);
    a = (a*100)/F;
    b= (b*100)/F;
    c = (c*100)/F;
    d = (d*100)/F;
    e = (e*100)/F;
    printf("The Percentages are \n 1st Subject : %f \n 2nd Subject : %f \n 3rd Subject : %f \n 4th Subject : %f \n 5th Subject : %f");
    return 0;
}