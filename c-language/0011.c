// Author : gonewithharshwinds
// Program : Temperature Celsius into Fahrenheit
// Date : August 2021

#include <stdio.h>

int main()
{
    float a,b;
    int flag = 0;
    printf("\n 1. Celsius to Fahrenheit \n 2. Fahrenheit to Celsius");
    scanf("%i", &flag);
    do
    {
    printf("\nEnter the temperature :");
    scanf("%f", &a);
    if (flag == 1)
    {
        b = (a*1.8)+32;
        printf("Temperature in Fahrenheit is : %f", b);
    }
    else 
    {
        b = (a-32)/1.8;
        printf("Temperature in Celsius is : %f", b);
    }
    printf("Do you wish to re-use? 1 for yes, else 2 for no.");
    scanf("%i", &flag);
    if(flag != 1)
    {
        break;
    }
    } while (flag=1);
    return 0;
}