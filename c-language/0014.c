// Author : gonewithharshwinds
// Program : Capital to lowercase characters/strings
// Date : August 2021

#include <stdio.h>

int main()
{
    char a[50]="";
    int i;
    printf("\nEnter your word/phrase:");
    gets(a);
    while(a[i]!='\0')
        {
            a[i] = a[i]+32;
            i++;
        }
        printf("\n Lowercase : %s", a);
}