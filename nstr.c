#include<stdio.h>
int main() 
{
  int a,i;
  char s;
  printf("enter the string and number");
  scanf("%[^\n]s %d",&s,&a);
  for(i=0;i<a;i++)
  {
    printf("%s",s);
  }
  
  return 0;
}
