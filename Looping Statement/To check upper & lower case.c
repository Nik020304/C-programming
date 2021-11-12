#include<stdio.h>
#include<conio.h>
int main()
{
char ch=" ";
printf("\n To check given character is uppercase or lowercase=\t");
ch=getche();
if((ch>='A')&&(ch<='Z'))
{
printf("\n given character is uppercase");
}
else if((ch>='a')&&(ch<='z'))
{
printf("\n given character is lowercase");
}
else
{

    printf("\n invalid");
}
getch();
return 0;
}
