#include<stdio.h>
int main() 
{
  int n,i,a[19],sum=0,avg=0;
  printf("enter the how many element you want");
  scanf("%d",&n);
  printf("the numbers are");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
   avg=sum/n;
   printf("the number avrage %d",avg);
   return 0;
}
