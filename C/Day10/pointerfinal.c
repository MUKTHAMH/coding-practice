#include<stdio.h>
int main(){
    int age =21;
    int *ptr = &age;
     //printf("%p", &age);
    // printf("%u\n", &age);
    // printf("%u\n", ptr);
    // printf("%u\n", &ptr);
    //printf("%d",age);
     //printf("%d", *( &age));
     printf("%d", *ptr);
     return 0;
}