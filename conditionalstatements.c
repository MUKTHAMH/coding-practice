#include<stdio.h>
int main(){
    int age;
    printf("enter your age");
    scanf("%d",&age);
    age >= 18 ? printf("eligible"):printf("not eligible");
   /* if(age<18){
         printf("they cannot vote");
         }else{
        printf("they are eligible for vote ,they can drive");*/
       /* int a,b,c;
        printf("enter the value of a b c");
        scanf("%d %d %d", &a, &b, &c);
        if((a<b)&&(a<c)){
            printf("a is smaller%d",a);
        }else if((b<a)&&(b<c)){
            printf("b is smallest%d",b);
        }else{
            printf("c is smaller %d",c);
        }*/

        return 0;
    }
