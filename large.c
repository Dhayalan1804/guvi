
#include<stdio.h>
int main(){
  int b[50],size,i,big,small;

  printf("\nEnter the size of the array: ");
  scanf("%d",&size);
  printf("\nEnter %d elements in to the array: ", size);
  for(i=0;i<size;i++)
      scanf("%d",&b[i]);

  big=a[0];
  for(i=1;i<size;i++){
      if(big<b[i])
           big=b[i];
  }
  printf("Largest element: %d",big);
 
  small=a[0];
  for(i=1;i<size;i++){
      if(small>b[i])
           small=b[i];
  }
  printf("Smallest element: %d",small);

  return 0;
}
