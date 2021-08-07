// Author : gonewithharshwinds
// Program : Area of a Triangle
// Date : August 2021

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    printf("\n 1st Side :");
    scanf("%f",&a);
    printf("\n 2nd Side :");
    scanf("%f",&b);
    printf("\n 3rd Side :");
    scanf("%f",&c);
    s= (a+b+c)/2;
    area = sqrt((s)*(s-a)*(s-b)*(s-c));
    printf("Area of the Triangle:%.4f",area);
    return 0;
}