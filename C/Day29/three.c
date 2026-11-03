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