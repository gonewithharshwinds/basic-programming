// Author : gonewithharshwinds
// Program : Simple Interest
// Date : August 2021

#include <stdio.h>

int main()
{
    int p, n, r, i;
    printf("\n Enter : {Principle} {No. of years} {Rate of Interest}");
    scanf("%f %f %f", &p, &n, &r);
    i = p*n*r/100;
    printf("\n %.3f is your Simple Interest", i);
    return 0;
}