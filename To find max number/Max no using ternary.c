#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0,no3=0;
    printf("\n enter 3 no to check max");
    scanf("%d %d %d",&no1,&no2,&no3);

    (no1==no2==no3)?printf("\n both num are equal=%d",no1,no2,no3):(no1>no2)&&(no1>no3)?printf("\n no1 is max=%d",no1):(no2>no1)&&(no2>no3)?printf("\n no2 is max=%d",no2):printf("\n no3 is max=%d",no3);
    getch();
    return 0;
}
