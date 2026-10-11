// #include <stdio.h>

// int main() {
//     int a = 10;
//     int *ptr = &a;

//     *ptr = 20;

//     printf("Value of a = %d", a);

//     return 0;
// }
//#include <stdio.h>

// int main() {
//     int a = 10, b = 20;
//     int temp;
//     int *p = &a, *q = &b;

//     temp = *p;
//     *p = *q;
//     *q = temp;

//     printf("a = %d\n", a);
//     printf("b = %d\n", b);

//     return 0;
// }
#include <stdio.h>

int main() {
    int a = 15, b = 25;
    int *p = &a, *q = &b;

    printf("Sum = %d", *p + *q);

    return 0;
}