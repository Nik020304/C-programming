 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 int no1=1,no2=0,no3=0,cnt=0;
 printf("\n enter cnt for fibonacci series");
 scanf("%d",&cnt);
 while(cnt>0)
 {

     printf("\n %d",no3);
    no3=no1+no2;
    no1=no2;
    no2=no3;
    cnt--;
 }

   getch();
   return 0;
 }
