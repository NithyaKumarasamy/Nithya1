
#include<stdio.h>
void main()
{
  int k,i;
  char s[10];
  printf("enter the 2 value");
  scanf("%[^\n] %d",s,&k);
  for(i=0;i<k;i++)
  {
    printf("%c",s[i]);
  }
}
