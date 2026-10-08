#include<stdio.h>
// void printtable(int n);
// int main(){
//     int n;
//     printf("enter the value of n");
//     scanf("%d", &n);
//     printtable(n);// argument/actual parameter
//  return 0;   
// }
// void printtable(int n){//parameter
//     for(int i=1;i<=10;i++){
//         printf(" %d\n", i*n);
//     }
// }
void calculateprize(float value);
int main(){
    float value = 100.0;
    
    calculateprize(value);
    return 0;
}
void calculateprize(float value){
    value = value+(0.18*value);
    printf("final prize: %f", value);
}
