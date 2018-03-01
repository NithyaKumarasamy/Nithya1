#include <stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int len,i,flag;
    printf("enter the string");
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o'|| a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O'|| a[i]=='U')
        {
          flag=1;    
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    

    return 0;
}



