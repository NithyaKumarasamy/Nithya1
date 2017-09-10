#include<stdio.h>
void main()
{
long long n;
printf("enter the value of n");
scanf("%lld",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("number of digits in integer%d",count);
}
}
