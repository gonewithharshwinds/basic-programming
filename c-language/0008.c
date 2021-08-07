// Author : gonewithharshwinds
// Program : Greater No. Among the Given Three Number
// Date : August 2021

#include <stdio.h>

int main()
{
    float a, b, c, temp;

    printf("\n 1st Number :");
    scanf("%f",&a);
    printf("\n 2nd Number :");
    scanf("%f",&b);
    printf("\n 3rd Number :");
    scanf("%f",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("1st Number is the Greatest");
        }
    }
    else
    {
        if(b>c)
        {
            printf("2nd Number is the Greatest");
        }
        else
        {
            printf("3rd Number is the Greatest");
        }
    }
    return 0;
}