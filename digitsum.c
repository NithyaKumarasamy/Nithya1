#include<stdio.h>
int main()
{
  int n,i=0,sum=0,rem=0;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
  }
  printf("the number is%d",sum);
 return 0; 
}

