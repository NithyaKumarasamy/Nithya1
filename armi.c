#include<stdio.h>
void main()
{
int low,high,i,temp1,temp2,n=0,rem,res=0;
printf("enter the low and high value");
scanf("%d%d",&low,&high)
printf("the armstrong number between two intervals are");
for(i=low+1;i<high;i++)
{
temp1=i;
temp2=i;
while(temp1!=0)
{
temp1=temp1/10;
++n;
}
while(temp2!=0)
{
rem=temp2%10;
res+=pow(rem,n);
temp2=temp/10;
}
if(result==i)
{
printf("yes");
}
n=0;
result=0;
}
return 0;
}

