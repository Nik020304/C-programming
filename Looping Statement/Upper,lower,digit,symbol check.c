#include<stdio.h>
#include<conio.h>
int main()
{
char ch="\0";

printf("\n to check given character is,digit or symbol=");
scanf("%c",&ch);

if((ch>='A')&&(ch<='Z'))
{
printf("\n given character is Uppercase character=%c",ch);
}
else if((ch>='a')&&(ch<='z'))
{
printf("\n given character is lowercase character");
}
else if((ch>='0')&&(ch<='9'))
{
printf("\n given character is digit");
}
else
{
printf("\n given character is symbol");
}
getch();
return 0;
}
