#include<stdio.h>
int main()
{
int n,r,re=0,num;
printf("enter the 3 digit number");
scanf("%d",&n);
num=n;
while(n!=0)
{
r=n%10;
re+=r*r*r;
n=n/10;
}
if(re==num)
{
printf("the number is armstong number");
}
else
{
ptint("the number is not armstrong number");
}
return 0;
}

