// #include <stdio.h>
// int main() {
//     int a = 20, b = 5;
//     printf("Addition = %d\n", a + b);
//     printf("Subtraction = %d\n", a - b);
//     printf("Multiplication = %d\n", a * b);
//     printf("Division = %d\n", a / b);
//     printf("Remainder = %d\n", a % b);
//     return 0;
// }
#include <stdio.h>
int main() {
    int a = 10, b = 30, c = 20;
    if (a >= b && a >= c)
        printf("Largest = %d", a);
    else if (b >= a && b >= c)
        printf("Largest = %d", b);
    else
        printf("Largest = %d", c);
    return 0;
}