#include <stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int length,i,flag=0;
    printf("enter the string");
    scanf("%s",a);
    length=strlen(a);
    for(i=0;i<length;i++)
    {
        if(a[i]!=a[length-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("the given string is palindrome");
    }
    else
    {
        printf("the number is not a palindrome");
    }

    return 0;
}



