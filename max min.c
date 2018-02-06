#include<stdio.h>
int main() 
{
  int n,i,a[19],max=0,min=0;
  printf("enter the how many element you want");
  scanf("%d",&n);
  printf("the numbers are");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]); 
  }
  max=a[0];
  for(i=0;i<n;i++)
  {
  if(a[i]>max)
  max=a[i];
  min=a[0];
 if(a[i]<min)
    min=a[i];
  }
  printf("the maximum %d\n",max);
  printf("the minimumnumber%d",min);
  return 0;
}
