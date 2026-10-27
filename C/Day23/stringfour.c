#include<stdio.h>
int main(){
    char str1[]="yogu";
    char str2[]="yogu";
    int i=0;
    while(str1[i]==str2[i]&& str1[i]!='\0'){
        i++;
    }
    if(str1[i]==str2[i]){
        printf("equal");
    }
    else{
        printf("not equal");
    }
    return 0;
}