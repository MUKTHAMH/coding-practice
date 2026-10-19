#include <stdio.h>
int main() {
    int n = -10;
    if (n > 0)
        printf("Positive");
    else if (n < 0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}