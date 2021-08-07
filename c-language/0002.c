// Author : gonewithharshwinds
// Program : Calculator
// Date : August 2021

#include <stdio.h>
int main()
{
    float a, b, c;
    int flag=0;
    do
    {
    printf("\n 1st Number :");
    scanf("%f",&a);
    printf("\n 2nd Number :");
    scanf("%f",&b);
    printf("\n Operator choice? \n '+' : put 1\n '-' : put 2\n '*' : put 3\n '/' : put 4\n");
    scanf("%i", &flag);
    if(b==0 && flag==4)
    {
        printf("NUM Error");
        flag = 0;
    }
    else
        switch (flag)
        {
            case 1:
                c = a + b;
                break;
            case 2:
                c = a - b;
                break;    
            case 3:
                c = a * b;
                break;    
            case 4:
                c = a / b;
                break;
            default:
                printf("SYNTAX Error");
                break;
        }
        printf("\n Result : %.2f",c);
        printf("\n Do you wish to repeat? \n Enter 0 for yes, 1 for no");
        scanf("%i", &flag);
    } while (flag=0);
    if(flag=1)
    {
    return 0;
    }    
}