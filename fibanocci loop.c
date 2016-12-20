#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,x=1,y=0,z=0;
    clrscr();
    printf("Enter the limit\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
     { 
       printf("%d,",z);
       z=x+y;
       x=y;
       y=z;
     }
      getch();
 }
