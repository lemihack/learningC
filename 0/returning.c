#include <stdio.h>

void sumAvg(int a, int b, int* sum, float* avg){
    *sum = a + b;
    *avg = (float)*sum/2;
}

int main()
{
    /* code */
    int i = 64, j = 48, sum;
    float avg;

    sumAvg(i,j,&sum,&avg);
    printf("sum = %d and avg = %f",sum,avg);

    return 0;
}
