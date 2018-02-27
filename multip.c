#include <stdio.h>
int main()
{
    int i,a,flag=0;
    printf("enter number");
    scanf("%d",&a);
    for(i=a;i>=a;i++)
    {
        if(i%10==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("nearest greater of%d is %d",a,i);
    }
    return 0;
}



