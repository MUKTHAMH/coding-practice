#include<stdio.h>
int main(){
    int marks[3];
    printf("enter phys marks ");
    scanf("%d", &marks[0]);
    printf("enter bio marks ");
    scanf("%d", &marks[1]);
    printf("enter chem marks ");
    scanf("%d", &marks[2]);
    printf("phys=%d,bio=%d,chem=%d", marks[0] , marks[1] , marks[2]);
    return 0;

}