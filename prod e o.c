#include<stdio.h>
int main()
{
  int n,m,o;
  printf("enter the 2 number");
  scanf("%d %d",&n,&m);
  o=n*m;
  if(o%2==0)
  {
    printf("product of given num is even ");
  }
  else
  {
    printf("product of given number is odd");
  }
  return 0;
}
