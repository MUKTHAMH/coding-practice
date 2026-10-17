#include<stdio.h>
int main(){
    // char firstname[50];
    // scanf("%s", firstname);
    // printf("firstname is %s", firstname);
    //  char str[100];
    // // gets(str);
    // fgets(str,100,stdin);
    //  puts(str);
    char *canchange = "hello world";
    puts(canchange);
    canchange = "hello";
    puts(canchange);

    return 0;
}