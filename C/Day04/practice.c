#include<stdio.h>
void printnamaste();
void printbanjour();
int main(){
    printf("enter i for indian & f for french\n");
    char ch;
    scanf("%c", &ch);
    if(ch=='i'){
        printnamaste();

    }else{
        printbanjour();
    }

    return 0;
    }
void printnamaste(){
    printf("namaste\n");
}
void printbanjour(){
    printf("banjour\n");
}