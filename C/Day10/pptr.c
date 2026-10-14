// #include <stdio.h>
// void square(int n);
// void _square(int *n);

// int main(){
//     // int i = 7;
//     // int *ptr = &i;
//     // int **pptr = &ptr;
//     // printf("%d", **pptr);
//     int number = 7;
//     square(number);
//     printf("number =%d\n", number);
 
//     _square(&number);
//     printf("number =%d\n", number);


//     return 0;
// }
// void square(int n){
   
//     n = n*n;
//     printf("%d\n",n);
// }
// void _square(int *n){
   
//     *n = (*n)*(*n);
//     printf("%d\n",*n);
// }
#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main(){
    int a =7;
    int b= 13;
    printf("a=%d b=%d\n",a,b);
    swap(a,b);
    
}
void swap(int a, int b){
  int t=a;
  a =b;
  b = t;
  printf("a = %d b=%d\n", a,b);
  


}
void _swap(int *a, int *b){
  int t= *a;
  *a =*b;
 *b = t;
  printf("a = %d b=%d\n", *a,*b);}
  
