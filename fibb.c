#include<stdio.h>
int main()
{
  int n,a=0,b=1,i,c;
  printf("enter the number");
  scanf("%d",&n);
  printf("%d %d",a,b);
  for(i=0;i<n;i++)
  {
    c=a+b;
    a=b;
    b=c;
    printf("%d\n",c);
  }
  return 0;
}
