#include <stdio.h>
void swappy(int*,int*);
int main() {
    
    int a=10, b=45;

    printf("The value of a = %d and b=%d \n",a,b);
    swappy(&a,&b);
    printf("The value of a = %d and b=%d",a,b);

 
    return 0;
}



void swappy(int* x, int* y){
    printf("ok");
    int temp = *y;
    *y = *x;
    *x = temp;

}
