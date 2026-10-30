#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%99s", s);

    int length = strlen(s);

    for (int i = length - 1; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}