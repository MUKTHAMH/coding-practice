#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    if(n<0){
        printf("negative");
    }else{
        printf("possitive");
    }
    return 0;
}