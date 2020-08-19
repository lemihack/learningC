#include <stdio.h>

void printer(int* ptr, int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("The value of element %d is %d \n", i+1,*(ptr+i));
    }
    
}

int main() {
    int arr[] = {12,54,7,9,12,4,6,46,54,54,5,52};
    // printer(arr,12);

    int i = 45;
    int* ptr = &i;
    int** nxt = &ptr;
    printf("%d",&ptr);
    printf("%d \n",ptr);
    printf("%d",nxt);
    return 0;
}