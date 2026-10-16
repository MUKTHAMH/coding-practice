#include <stdio.h>
#include <string.h>

int main() {
    char str[50];

    printf("Enter a string: ");
    scanf("%49s", str);

    printf("Length = %d", (int)strlen(str));

    return 0;
}

