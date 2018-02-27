#include <stdio.h>

int main()
{
    int a,b,c;    
    printf("enter the 2 number");
    scanf("%d %d",&a,&b);
    c=a+b;
    if(c%2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}



