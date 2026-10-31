#include <stdio.h>

int main() {
    int arr[6] = {10, 15, 20, 25, 30, 35};
    int *ptr = arr;
    int even = 0, odd = 0;

    for (int i = 0; i < 6; i++) {
        if (*(ptr + i) % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}