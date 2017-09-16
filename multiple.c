#include<stdio.h>
int main()
{
int n,r,i;
printf("enter the integer value");
scanf("%d",&n);
ptintf("enter the range value");
scanf("%d",&r);
for(i=1;i<=r;++i)
{
ptintf("%d*%d=%d\n",i,n,i*n);
}
return 0;
}


