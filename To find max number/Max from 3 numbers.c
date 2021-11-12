 #include<stdio.h>
 #include<conio.h>
 int main()
 {
  int no1=0,no2=0,no3=0;
  printf("\n enter 3 numbers to check max");
  scanf("%d %d %d",&no1,&no2,&no3);
  if(no1==no2)&&(no2==no3)
  {
    printf("\n all numbers are equal=%d %d %d",no1,no2,no3);
    
  }
  else if(no1>no2)&&(no1>no3)
  {
    printf("\n no1 is max=%d",no1);
  }
  else if (no2>no1)&&(no2>no3)
  {
    printf("\n no2 is max=%d",no2);
  }
  else
  {
    printf("\n no3 is max=%d",no3);
  }
  getch();
  return 0;
 }