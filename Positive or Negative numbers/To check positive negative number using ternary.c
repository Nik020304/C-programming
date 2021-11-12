 #include<stdio.h>
 #include<conio.h>
 int main()
   {
     int no=0;
     printf("\n enter no to check positive or negative");
     scanf("%d",&no);
   
     (no==0)?printf("\n no is neutral=%d",no):(no>0)?printf("\n no is positive=%d",no):printf("\n no is negative=%d",no);
     getch();
     return 0;
   }