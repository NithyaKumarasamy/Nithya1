#include<stdio.h>
void main()
{
long long result=1;
int base,component;
printf("enter the value of base");
scanf("%d",&base);
printf("enter the value of exponent");
scanf("%d",&exponent);
while(exponent!=0)
{
result=result*base;
--exponent;
}
printf(" the result value%lld",result);
return 0;
}
