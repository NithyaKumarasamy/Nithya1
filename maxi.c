#include<stdio.h>
int main() 
{
  int n,i,a[10],max=0;
  printf("enter the number of elements u want\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=1;i<n;i++)
  {
    if(max<a[i])
    {
      max=a[i];
    }
  }
  printf("the maximum element is%d",max);
  return 0;
}
