#include<stdio.h>
#include<math.h>
int main()
{
    int a,t;
    double si;
    float r;
    printf("enter amount,time,rate");
    scanf("%d %d %f",&a,&t,&r);
    si=(a*t*r)/100;
    printf("%f",floor(si));
}
