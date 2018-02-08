#include<stdio.h>
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  if(n%2==0)
  {
    printf("ginen number is even ");
  }
  else
  {
    printf("nerest even number in the given number is %d",n-1);
  }
  return 0;
    
  }
