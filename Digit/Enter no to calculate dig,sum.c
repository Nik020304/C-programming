#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,Dig=0,dsum=0,temp=0;

    printf("\n Enter +ve integer number to calculate its Digits sum");
    scanf("%d",&no);

    if(no<0)
        {
        temp=-no;
        }
    else
        {
        temp=no;
        }
    for( ;temp>0;temp /=10)
        {
        Dig=temp%10;
        printf("\n %d+%d",dsum,Dig,(dsum+Dig));
        dsum+=Dig;
        }
printf("\n sum of Digits in given numbers %d is=%d.",no,dsum);
getch();
return 0;
}
