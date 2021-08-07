// Author : gonewithharshwinds
// Program : Even or Odd
// Date : August 2021

#include <stdio.h>

int main()
{
    int a;
    printf("\n Enter your Number");
    scanf("%i", &a);
    if ( a%2 == 0 )
    {
        printf("\n Your Number is EVEN");
    }
    else
    {
        printf("\n Your Number is ODD");
    }
    return 0;
}