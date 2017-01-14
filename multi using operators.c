#include<stdio.h>
#include<conio.h>
#define line 10
#define COL 10
void main()
{
int r,c,pro[line] [COL];
int i,j;
clrscr();
printf("Print the Table from 2 to 10\n\n\n");
printf(" ");
for(j=1 ;j<=COL;j++)
printf("%4d" ,j);
printf( "\n");
printf("   --------------------------------------- \n ");
for(i=0;i<line;i++ )
{
r=i+ 1; 
for(j=1 ;j<=COL;j++)
{
c=j;
pro [i][j]=r*c;
printf("%4d" ,pro[i] [j]);
}
printf("\n ");
}
getch();
}
