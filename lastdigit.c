#include<stdio.h>
void main()
{
    int rem,i;
    int n[10];
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;n[i]!='\0';i++)
    {
        rem=n%10;
        n[i]=rem;
        n=n/10;
    }
    for(i=0;n[i]!='\0';i++)
    {
        printf("%d",n[i]);
        i++;
    }
}
