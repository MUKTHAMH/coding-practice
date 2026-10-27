#include<stdio.h>
int main(){
    char str1[]="muktha";
    char str2[20];
    int i=0;
    while(str1[i] !='\0'){
        str2[i] = str1[i];
        i++;
    }
    str2[i]='\0';
    printf("coppied string =%s", str2);
    return 0;
}