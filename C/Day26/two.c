#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Value = %d\n", a);
    printf("Address = %p\n", (void *)&a);
    printf("Pointer value = %d\n", *p);

    return 0;
}