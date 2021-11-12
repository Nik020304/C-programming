#include<stdio.h>
#include<conio.h>
int main()
{
 int R,C;

 for(R=1;R<=10;R++)
    {
    for(C=1;C<=10;C++)
        {
            printf(" %3d\t",C*R);
        }

            printf("\n");
    }
 getch();
 return 0;
 }



