#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=1,no3=0,cnt=0;
    printf("\n enter no to check fibonacci series=");
    scanf("%d",&cnt);
    printf("\n fibonacci series of given count=");
        for(no1=0;cnt>0;cnt--)
        {
            printf("\n %d",no3);
            no1=no2;
            no2=no3;
            no3=no1+no2;
        }
getch();
return 0;
}
