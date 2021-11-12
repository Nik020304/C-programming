#include<stdio.h>
#include<conio.h>
int main()
{
  int no=0;
  printf("\n ASCII Table= \n");
  while(no<128)
    {
      printf("\n\t %3d %c",no,no);
      no++;
    }
  getch();
  return 0;
}
