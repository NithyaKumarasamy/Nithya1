#include<stdio.h>
void main()
{
char s[19]; 
int i,digit=0,count=0;
printf("enter the string");
scanf("%s",s);
while(s[i]!='\0')
{
if(s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')
{
digit++;
}
else
{
++count;
}
i++;
}
printf("special characters are%d",count);
}
