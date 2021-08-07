// Author : gonewithharshwinds
// Program : Display the Size of the Different Datatype
// Date : August 2021

#include <stdio.h>

int main()
{ 
    printf("\nInt is : %2d bytes", sizeof(short int));
    printf("\nLong Int is : %2d bytes", sizeof(long int));
    printf("\nChar is : %2d bytes", sizeof(char));
    printf("\nFloat is : %2d bytes", sizeof(float));
    printf("\nDouble is : %2d bytes", sizeof(double));
    printf("\nLong Double is : %2d bytes", sizeof(long double));
    return 0;
} 