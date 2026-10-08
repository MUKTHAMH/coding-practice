#include<stdio.h>
int sum(int a , int b);
int main(){
    int a,b;
    printf("enter the value of a",a);
    scanf("%d", &a);
    printf("enter the value of b",b);
    scanf("%d", &b);
    int s = sum(a,b);
    printf("sum is :%d",s);

    return 0;
}
int sum(int a , int b){
    return a+b;
}