#include<stdio.h>
void main()
{
int a,b;
printf("enter the 2 values");
scanf("%d %d",&a,&b);
printf(before swapping 2 numbers are%d %d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("after swapping 2 numbers%d %d",a,b);
}

