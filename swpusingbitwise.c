#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the 2 number");
  scanf("%d %d",&a,&b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("the swapping to number is%d %d",a,b);
  return 0;
}
