#include<stdio.h>
int main()
{
  int a,b,temp=0;
  printf("enter the 2 nubmber");
  scanf("%d %d",&a,&b);
  temp=a;
  a=b;
  b=temp;
  printf("after swapping%d %d",a,b);
  return 0;
}

  
  
