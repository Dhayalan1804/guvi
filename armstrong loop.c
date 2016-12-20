#include<stdio.h>
#include<conio.h>
void main()
{
int num, n, rem;
   int cube=0, sum=0;
   printf("\n Enter a number: ");
   scanf("%d", &num);
   n = num;
   while(n>0)
   {
      rem = n%10;
      cube = rem*rem*rem;
      sum = sum + cube;
      n = n/10;
   }
   if(num==sum)
    printf("\n %d is armstrong number",num);
   else
    printf("\n %d not armstrong number",num);
   getch();
}
