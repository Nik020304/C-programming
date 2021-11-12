#include<stdio.h>
#include<conio.h>
int main()
{
  int no=0;
  printf("\n check no is even or odd=");
   Up:
  scanf("%d",&no);
   if(no==0)
   {
     printf("\n no is invalid use other than 0");
     goto Up;
   }  
   else if(no%2==0)
   {
     printf("\n no is even=%d",no);
   }
   else
   {
     printf("\n no is odd=%d",no);
   }
printf("\n thank you");
getch();
return 0;
}