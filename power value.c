#include<stdio.h>
void main()
{
    int base,result=1,exponent;
    printf("enter the base & exponent value");
    scanf("%d %d",&base,&exponent);
    while(exponent!=0)
    {
      result*=base;
      --exponent;
    }
    printf("%d",result);
    
}
