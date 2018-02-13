#include<stdio.h>
int main() 
{
  int a[11],i,max=0;
  printf(" the number are");
  for(i=0;i<10;i++)
  {
    scanf("%d",a[i]);
  }
  max=a[0];
  for(i=1;i<10;i++)
  {
    if(max<a[i])
    {
     max=a[i];
    }
  }
  printf("the max number is%d",max);
  
  return 0;
}
