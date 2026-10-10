// #include<stdio.h>
// int fact(int n);
// int main(){
// printf("factorial is %d", (fact(3)));
// }
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     int factNm1=fact(n-1);
//     int factn=factNm1*n;
//     return factn;

// }
// #include<stdio.h>
// float fahrenheitconversion(float celsius);
// int main(){
//     float fahrenheit=fahrenheitconversion(0);
//      printf(" fahrenheit is %f", fahrenheit);
// }
// float fahrenheitconversion(float celsius){
//      float fahrenheit = celsius*(9/5)+32;
//      return fahrenheit;
// }
// #include<stdio.h>
// int percentageclt (int science,int maths,int sans);
// int main(){
//     int science = 80;
//     int maths = 60;
//     int sns=70;
//     printf(" percentage is %d", percentageclt(science,maths,sns));
//     return 0;
// }
// int percentageclt (int science,int maths,int sans){
//     return((science + maths + sans)/3);
// }
#include<stdio.h>
 int fib(int n);
int main(){
    printf("fib is %d",fib(6));
    return 0;
}
 int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibn=fibNm1+fibNm2;
   // printf("fib is %d is: %d", n, fibn);
    return fibn;
 }

