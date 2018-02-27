#include <stdio.h>
int main()
{
    int a,i,flag=0;
    printf("enter the number");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("the num is prime number ");
    }
    else
    {
        printf("the num is non prime number");
    }
    return 0;
}



