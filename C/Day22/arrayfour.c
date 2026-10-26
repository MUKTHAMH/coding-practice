#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int i,max=a[0];
    for(i=0;i<5;i++){
        if(max=a[i]>max){
            max=a[i];
        }
    }
    printf("max=%d", max);
    return 0;
}