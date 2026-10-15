#include<stdio.h>
int main(){
    // //int age = 21;
    // //int *ptr = &age;
    // // float price=100.0;//4 memory bites
    // // float *ptr = &price;
    // char star ='*';
    // char *ptr = &star;// one memory size
    // printf("ptr is =:%u\n", ptr);
    // ptr++;//increases 4 bites 
    // printf("ptr is =:%u\n", ptr);
    // ptr--;
    // printf("ptr is =:%u\n", ptr);
    int age = 21;
    int _age = 22;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("%u , %u difference = %u\n",  ptr,_ptr ,ptr-_ptr);
    _ptr = &age;
    printf("comparision:%u\n", ptr==_ptr); 
    return 0;
}