// Author : gonewithharshwinds
// Program : Valid Birthday or Not 
// Date : August 2021

#include<stdio.h>
#include<conio.h>
void main()
{
    int d,m,y,i,leap=0,temp1=0,temp2=0,temp3=0;
    while(1)
    {
        printf("\n\nEnter The Date (dd mm yyyy) : ");
        scanf(" %d %d %d",&d,&m,&y);
        if(y<1900||y>2021)
        {
        printf("\nYear Is Not Valid !!!! Try Again");
        temp1=1;
        }
        else
        {
            printf("\nYear Is Valid ");
        }
        if(temp1!=1)
        {
            if(y%4==0)
                leap=1;
        }
        if(m<1||m>12)
        {
            printf("\nMonth Is Not Valid !!!! Try Again");
        }
        else
        {
            printf("\nMonth Is Valid ");
        }
        if(d<1||d>31)
        {
           temp3=1;
        }
        if(m>=1&&m<=7)
        {
            for(i=1;i<=6;i++)
            {
                if(m%2==0)
                    temp2=30;
                if(m%2==1)
                    temp2=31;
            }
        }
        if(leap==0&&m==2)
        {
            temp2=28;
        }
        if(leap==1&&m==2)
        {
            temp2=29;
        }
       if(m>=8&&m<=12)
        {
            for(i=7;i<=12;i++)
            {
                if(m%2==0)
                    temp2=31;
                if(m%2==1)
                    temp2=30;
            }
        }
        if(d>temp2)
        {
            temp3=1;
        }
        if(temp3==1)
        {
            printf("\nDate Is Not Valid !!!!! Try Again");
        }
        if(temp3==0)
        {
            printf("\nDate Is Valid ");
        }
        printf("\n\n\nPress Enter For Checking the Birthday Validity again\n");
        getch();
    }
}