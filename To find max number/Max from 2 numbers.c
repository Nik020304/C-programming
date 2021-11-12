 #include<stdio.h>
 #include<conio.h>
 int main()
 {
   int no1=0,no2=0;
   printf("\n enter two no to check max no=");
   Up:
   scanf("%d %d",&no1,&no2);
   if(no1==no2)
   {
     printf("\n both no are equal try another no=%d %d",no1,no2);
     goto Up;
   }  
   else if(no1>no2)
   {
     printf("\n no1 is max=%d",no1);
   }
   else
   {
     printf("\n no2 is max=%d",no2);
   }
 printf("\n Thank you");
 getch();
 return 0;
 }