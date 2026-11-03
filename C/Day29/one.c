#include<stdio.h>
void printhw(int count);
int main(){
    printhw(7); 
    return 0;
}
void printhw(int count){
if(count==0){
    return;
}
    printf("hello world\n");
    printhw(count-1);
}