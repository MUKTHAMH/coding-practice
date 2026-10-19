#include <stdio.h>
int main() {
    int a = 10, b = 25, c = 15;
    if (a > b && a > c)
        printf("Largest = %d", a);
    else if (b > c)
        printf("Largest = %d", b);
    else
        printf("Largest = %d", c);
    return 0;
}