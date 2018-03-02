#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,b,i,flag=1;
    printf("enter 2 number");
    scanf("%d %d",&a,&b);
    n=a*b;
    for(i=0;i<n;i++)
    {
        if(n==i*i)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}



