#include<stdio.h>

int main()
 {
  int no,r,rev=0;
  printf("\n enter the number's which print in reverse format");
  scanf("\n %d",&no);
  while(no!=0)

  {
   r=no%10;
   rev=rev*10+r;
   no=no/10;
  }
  printf("\n print in reverse format is %d",rev);
  getch();
  return 0;
 }
