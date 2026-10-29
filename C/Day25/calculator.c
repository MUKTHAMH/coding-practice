#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter: number operator number: ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+': printf("%d", a + b); break;
        case '-': printf("%d", a - b); break;
        case '*': printf("%d", a * b); break;
        case '/':
            if (b != 0)
                printf("%.2f", (float)a / b);
            else
                printf("Cannot divide by zero");
            break;
        default: printf("Invalid operator");
    }

    return 0;
}