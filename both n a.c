#include<stdio.h>
int main()
{
  char s[10];
  int i,flag1=0,flag2=0;
  printf("enter the string and number");
  scanf("%s",&s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]>=0 && s[i]<=9)
    {
      flag1=1;
    }
    
    if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
      {
        flag2=1;
      }
  }
  if(flag1=1 && flag2=1)
  {
    printf("the string contain both number and alphabet");
  }
    return 0;
      }
