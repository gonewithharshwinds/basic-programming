// Author : gonewithharshwinds
// Program : Print the First Three Powers (N^1, N^2, N^3)
// Date : August 2021

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b;
    printf("\nEnter your number : ");
    scanf("%f", &a);
    b = pow(a,1);
    printf("Number powered to 1 is : %.4f", b);
    b = pow(a,2);
    printf("Number powered to 2 is : %.4f", b);
    b = pow(a,3);
    printf("Number powered to 3 is : %.4f", b);
    return 0;
}
