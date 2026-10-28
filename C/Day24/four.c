#include <stdio.h>

int main() {
    int side, area;

    printf("Enter side: ");
    scanf("%d", &side);

    area = side * side;

    printf("Area = %d", area);

    return 0;
}