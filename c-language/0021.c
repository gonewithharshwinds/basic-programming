// Author : gonewithharshwinds
// Program : Check Leap Year or Not
// Date : August 2021

#include <stdio.h>

int main()
{
    int a;
    printf("\nEnter the Year :");
    scanf("%i", &a);
    if ( a%4 == 0 )
    {
        printf(" %i Is a LEAP YEAR", a);
    }
    else
    {
        printf(" %i Is NOT a LEAP YEAR", a);
    }
    return 0;
}