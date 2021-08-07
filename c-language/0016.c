// Author : gonewithharshwinds
// Program : Factorial
// Date : August 2021

#include <stdio.h>

int main()
{
    int a,i;
    unsigned long long int b=1;
    printf("Enter The Number. You Want Factorial  :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        {
            b=b*i;
        }
    printf("\nFactorial is = %llu\n",b);
    return 0;
}