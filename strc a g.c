#include<stdio.h>
int main() 
{
 char a[10],b[10];
 int i,temp,c,d;
 printf("enter the 2 string ");
 scanf("%s %s",&a,&b);
  c=strlen(a);
  d=strlen(b);
 while(a[i]!='\0' && b[i]!='\0')
 {
   if(a[i]==b[i])
   {
     temp=0;
   }
   i++;
 }
 if(temp=0)
 {
 printf("the string %s",a);
 }
   else if(c>d)
   {
     printf("the string is %s",a);
   }
   else
   {
     printf("the string is %s",b);
   }
  return 0;
 }
