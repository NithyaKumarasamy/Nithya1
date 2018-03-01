#include <stdio.h>
#include<string.h>
int main()
{
    int b=0,flag=0,i,c;
    char a[10];
    printf("enter the string");
    scanf("%s",a);
    b=strlen(a);
    c=b-1;
    for(i=0;i<=c;i++)
    {
        if(a[i]=='0' || a[i]=='1')
        {
            flag=0;
        }
        else
        {
            flag=1;
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



