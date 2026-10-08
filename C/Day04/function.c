#include<stdio.h>
//  void printhello();//declaration
// int main(){
//     printhello();
//      printhello();
//       printhello();
//     return 0;
// }
// void printhello(){
//     printf("hello\n");
// }
void printhello();
void printgoodbye();//declr
int main(){
    printhello();
    printgoodbye();
    return 0;
}
void printhello(){
    printf("hello\n");
}
void printgoodbye(){
    printf("goodbye\n");
}