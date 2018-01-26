#include <stdio.h>
int main()
{
    int i, n,arr[100];
    printf("Enter total number of elements: ");
    scanf("%d", &10);
    printf("\n");
    for(i = 1; i <=10; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%d", &arr[i]);
    }
    for(i = 1; i < n; ++i)
   {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %d", arr[0]);

    return 0;
}
