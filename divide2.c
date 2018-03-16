#include<stdio.h>
void main()
{
    int n,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n%2==0)
    {
        n=n/2;
        printf("%d",n);
    }
    if(temp==n)
    {
      printf("\n%d",n);  
    }
    
    
}
