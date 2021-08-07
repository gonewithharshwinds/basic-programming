// Author : gonewithharshwinds
// Program : Character Is Uppercase, Lowercase Alphabet or a Digit or a Special Symbol
// Date : August 2021

#include<stdio.h>

void main()
{
    char a;
    int flag;
    do{
        printf("\nEnter any Character : ");
        scanf("%c",&a);
        if(a>=65 && a<90)
        {
            printf("\nIs an Upper Case Letter");
        }
        else
        {
            if(a>=97 && a<=122)
            {
                printf("\nIs a lower Case Letter");
            }
            else
            {
                if(a>=48 && a<=57)
                {
                    printf("\nIs a Digit");
                }
                else
                {
                    printf("\nIs Special Symbol");
                }
            }
        }
    }while (flag = 0);
    return 0;
}