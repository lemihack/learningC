#include <stdio.h>

int main() {
    FILE *ptr;
    int num;
    int num2;

    ptr = fopen("app.txt","r");
    if (ptr == NULL)
    {
        /* code */
        printf("File does not exist!!!");
    }else
    {
        /* code */
        fscanf(ptr,"%d",&num);
        fscanf(ptr,"%d",&num2);
        fclose(ptr);

        printf("The value of num is %d \n",num);
        printf("The value of num2 is %d",num2);
    }
    
    
    return 0;
}