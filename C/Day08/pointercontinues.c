#include<stdio.h>
int main(){
    // int age = 22;
    // int *ptr = &age;
    // printf("%d\n", age);
    // printf("%d\n", *ptr);
    // printf("%d\n",*(&age));
    int *ptr;
    int x;
    ptr = &x;
    *ptr = 0;
    printf("x=%d\n",x);
    printf("*ptr = %d\n", *ptr);
    *ptr +=5;
    printf("x = %d\n,x");
    printf("*ptr=%d\n",*ptr);
    (*ptr)++;
    printf("x = %d\n",x);
    printf("*ptr = %d\n",ptr);
    return 0;
}