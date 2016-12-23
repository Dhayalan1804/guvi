#include<stdio.h>
int main()
{
char a[50],cg;
int i,c=0;
clrscr();
printf("Enter any string:");
for(i=0;c!='\n';i++)
{
c=getchar();
a[i]=c;
}
s[i]='\0';
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
c++;
while(a[i]==' ')
i++;
}
}
printf("\n\nTotal words are %d",c+1);
return 0;
}
