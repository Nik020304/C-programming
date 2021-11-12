 #include<stdio.h>
 #include<conio.h>
 void main()
 {
   int num1,num2;
   printf("\nenter two numbers for swapping=");
   scanf("\n %d %d",&num1,&num2);
   printf("\n enter num1 before swapping=%d",num1);
   printf("\nenter num2 before swapping=%d",num2);
      num1=num1+num2;
      num2=num1-num2;
      num1=num1-num2;
  printf("\n enter num1 after swapping=%d",num1);
  printf("\nenter num2 after swapping=%d",num2);
  printf("\n Thank you");
  getch();
 return 0;
}   
 