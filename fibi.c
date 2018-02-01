#include<stdio.h>
int main() 
{
  int num,fib1=0,fib2=1,count=2,fib3;
  printf("enter the number of fib u want ");
  scanf("%d",&num);
  printf("%d %d",fib1,fib2);
  while(count<num)
  {
    fib3=fib1+fib2;
    printf("\n%d",fib3);
    fib1=fib2;
    fib2=fib3;
    count++;
  }
  
  return 0;
}
