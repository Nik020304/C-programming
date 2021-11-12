#include<stdio.h>
#include<conio.h> 
int main()
{
  int num1=0,num2=0,temp=0;
  printf("\nenter two numbers for swapping=");
  scanf("\n %d %d",&num1,&num2);
  printf("\n enter num1 before swapping=%d",num1);
  printf("\n enter num2 before swapping=%d",num2);
  temp=num1;
  num1=num2;
  num2=temp;
  printf("\n enter num1 after swapping=%d",num1);
  printf("\n enter num2 after swapping=%d",num2);
  printf("\n Thank you");
getch();
return 0;
}