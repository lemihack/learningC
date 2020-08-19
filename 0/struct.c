#include <stdio.h>
#include <string.h>
struct employee
{
    /* data */
    int code;
    float salary;
    char name[10];
};


int main() {
    struct employee e1;
    e1.code = 101;
    e1.salary = 145.154;
    strcpy(e1.name,"chrish");


    printf("%d \n",e1.code);
    printf("%f \n",e1.salary);
    printf("%s",e1.name);
    return 0;
}