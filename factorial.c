#include<stdio.h>
int main()
{
int i,n;
unsignd long long factorial=1;
ptintf("enter the passitive integer");
scanf("%d",&n);
if(n<0)
{
printf("error we not find factorial for negative number");
}
else
{
for(i=1;i<=n;++i)
{
factorial=*i;
}
printf("the factorial number",factorial);
}
return 0;
}
