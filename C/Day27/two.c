#include <stdio.h>

int main() {
    int arr[5] = {25, 10, 45, 5, 30};
    int *ptr = arr;
    int min = *ptr;

    for (int i = 1; i < 5; i++) {
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }

    printf("Smallest element = %d", min);
    return 0;
}