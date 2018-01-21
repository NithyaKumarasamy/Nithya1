#include<stdio.h>
int main()
{
int n,i,a[i],j,temp;
printf("enter the how mant elements you want");
scnaf("%d",&n);
printf("enter the elements are:");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<=n;i++)
{
printf("%d\t",a[i]);
}
return 0;
}

