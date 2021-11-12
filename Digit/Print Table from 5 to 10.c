#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j;
 int num;
 for(i=1;i<=10;i++)
    {
        num=i;
        for(j=1;j<=10;j++)
        {
            printf(" %3d\t",(j*num));
        }

        printf("\n");
    }
 getch();
 return 0;
 }



