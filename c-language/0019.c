// Author : gonewithharshwinds
// Program : Eligible for Voting or Not
// Date : August 2021

#include <stdio.h>

void main()
{
    int a;
    printf("\nEnter your age : ");
    scanf("%i", &a);
    if ( a < 18 )
    {
        printf("You are not eligible for Voting");
    }
    else
    {
        printf("You are eligible for Voting");
    }
}