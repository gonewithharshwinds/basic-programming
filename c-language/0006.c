// Author : gonewithharshwinds
// Program : Person's Name in Abbreviated
// Date : August 2021

#include <stdio.h>
#include <string.h>

int main()
{
    char a[15], b[15], c[15], s[4];
    printf("Enter your name in the format : {First Name} {Middle Name} {Last Name} \n");
    scanf("%s %s %s", &a, &b, &c);
    printf("Abbreviated name: ");
    printf("%c. %c. %s \n", a[0], b[0], c);
    return 0;
}