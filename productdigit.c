#include<stdio.h>
void main()
{
    int n,rem,pro=1;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        pro=rem*pro;
        n=n/10;
    }

    printf("%d",pro);
}
