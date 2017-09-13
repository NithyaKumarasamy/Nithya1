#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("enter the passitive number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("the number is prime number");
}
else
{
printf("the number is not prime number");
}
return 0;
}




