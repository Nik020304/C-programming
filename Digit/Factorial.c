#include<stdio.h>
#include<conio.h>
int main()
{
long int no=0,temp=0,fact=1;
  printf("\n enter no to get factorial");
  scanf("%d",&no);
  temp=no;
  while(temp>1)
  {
  fact=fact*temp;
  temp--;
  }
  printf("\n factorial of %d is %d",no,fact);
  getch();
  return 0;
}
