#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,f;
  clrscr();
  printf("Enter a Number\n");
  scanf("%d",&n);
  for(i=1,f=1;i<=n;i++)
  {
    f=f*i;
  }
   printf("The factorial is %d",f);
   getch();
}
