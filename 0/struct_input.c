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
    struct employee e1,e2,e3;

    printf("Enter the value of e1");
    scanf("%d",&e1.code);
    printf("Enter the salary of e1");
    scanf("%f",&e1.salary);
    printf("Enter the name 0f e1");
    scanf("%s",e1.name);
    

    printf("Enter the value of e2");
    scanf("%d",&e2.code);
    printf("Enter the salary of e2");
    scanf("%f",&e2.salary);
    printf("Enter the name 0f e2");
    scanf("%s",e2.name);
    
    printf("Enter the value of e3");
    scanf("%d",&e3.code);
    printf("Enter the salary of e3");
    scanf("%f",&e3.salary);
    printf("Enter the name 0f e3");
    scanf("%s",e3.name);
    
    return 0;
}