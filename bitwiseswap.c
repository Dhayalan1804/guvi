#include<stdio.h>
int main()
{
int s = 65;
    int n = 120;
    printf(" value of i=%d k=%d before swapping", s,n);

    s = s^ k;
    n = s ^ k;
    s = s^ k;
    printf("value of i=%d k=%d after swapping", s,n);

    return 0;
}
