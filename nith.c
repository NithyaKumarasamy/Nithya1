#include<stdio.h>
void main()
{
int array[50],size,i,largest;
printf("enter the size of the array");
scanf("%d",&size);
printf("enter the number of elements");
  for(i=0;i<size;i++)
  {
 scanf("%d",&array[i]);
  }
  largest=array[0];
  for(i=1;i<size;i++)
  {
    if(largest<arra[i])
  {
  largest=array[i];
  }
  printf("the largest number is %d",largest);
}

