#include <stdio.h>

void main()
{
    int arr[5];
    int *ptr;
    ptr = arr;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("Enter value for %d number: ",i);
        scanf("%d",ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("%d = %d \n",i,arr[i]);
    }
}