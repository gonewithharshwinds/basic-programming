// Author : gonewithharshwinds
// Program : Area and Circumference of a Circle
// Date : August 2021

#include <stdio.h>
#include <math.h>
int main()
{
    float r, area, cir, pi;
    pi = 3.14159265358979323846264338;
    printf("\n Enter The Radius :");
    scanf("%f", &r);
    cir = 2 * pi * r;
    area = cir * r / 2;
    printf("\n The Area is: %.2f", area);
    printf("\n The Circumference is: %.2f", cir);
    return 0;
}