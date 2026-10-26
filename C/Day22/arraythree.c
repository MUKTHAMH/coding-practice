#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int i, sum =0;
    float avg;
    for(i=0;i<5;i++){
        sum = sum+a[i];
    }
    avg = sum/5.0;
    printf("avg =%f", avg);
    return 0;
}