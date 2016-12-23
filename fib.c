#include<stdio.h>
int main()
{
int n,f=0,s=1,r,t;
printf("enter the number of terms");
scanf("%d",&n);
for(t=0;t<n;t++)
{
  if(t<=1)
  r=t;
  else
  {
  r=f+s;
  f=s;s=r;
}
printf("%d",r);
}
return 0;
}
