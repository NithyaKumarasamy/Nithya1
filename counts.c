#include<stdio.h>
void main()
{
char s[10],i,count=0;
printf("enter the sentance");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
++count;
}
}
printf("the number of spaces are%d",count):
}
