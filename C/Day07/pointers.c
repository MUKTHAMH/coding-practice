// 
#include<stdio.h>
int main(){
    // //int age = 21; 
    // int *ptr = &age;
    // int _age = *ptr;
    // printf("%d",_age);
    // return 0;
    // char star = '*';
    // char *ptr = &star;
    // char _star = *ptr;
    // printf("%c",_star);
    int age = 21;
    int *ptr = &age;
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);
    return 0;


}