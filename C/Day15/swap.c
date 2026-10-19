#include <stdio.h>
int main() {
    int a = 10, b = 20, temp;
    printf("a =%d b=%d\n", a , b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d", a, b);
    return 0;
}