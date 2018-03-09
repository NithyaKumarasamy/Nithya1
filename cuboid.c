
#include <stdio.h>

int main()
{
    float w,l,h,surfacea,volume;
    printf("enter the width,lenth,height");
    scanf("%f %f %f",&w,&l,&h);
    surfacea=2*(w*l+l*h+h*w);
    printf("surface is%f",surfacea);
    volume=w*l*h;
    printf("the volume is%f",volume);
}



