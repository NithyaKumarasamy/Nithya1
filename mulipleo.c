#include<stdio.h>
void main()
{
    int n,i;
    printf("enter one number");
    scanf("%d",&n);
    printf("enter number to find multiple of it");
    scanf("%d",&i);
      if(n%i==0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    return 0;
}



