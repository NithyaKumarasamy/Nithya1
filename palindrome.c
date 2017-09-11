#include<stdio.h>
int main()
{
int n,reverse=0,originalinteger=0,remainder;
printf("enter the integer number");
scanf("%d",&n);
originalinteger=n;
while(n!=0)
{
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;
}
if(reverse==originalinteger)
{
printf("given number is palindrome");
}
else
{
printf("the given number is not palindrome"0;
}
return 0;
}

