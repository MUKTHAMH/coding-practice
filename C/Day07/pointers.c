#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void*)&a);
    printf("Address stored in ptr = %p\n", (void*)ptr);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}