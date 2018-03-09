
#include <stdio.h>

int main()
{
    char s[10];
    int i;
    printf("enter the sting ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
{
    if('1'<=s[i] && s[i]<='9')
    {
        printf("%d",&s[i]);
    }
}
    return 0;
}



