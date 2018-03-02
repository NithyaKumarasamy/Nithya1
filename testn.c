#include<stdio.h>
void main()
{
    int n,r,l;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the 2 interval");
    scanf("%d %d",&l,&r);
    if(l<n && n<r)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}



