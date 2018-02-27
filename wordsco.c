#include <stdio.h>
int main()
{
    int count=1,i;
    char s[10];
    printf("enter the string");
    scanf("%[^\n]",s);
    while(s[i]==' ')
    {
        count=count+1;
        i++;
    }
    printf("tne number of words in the given string is%d",count);
    return 0;
}



