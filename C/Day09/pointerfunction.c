// #include <stdio.h>

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x = 10, y = 20;

//     printf("Before swapping: x = %d, y = %d\n", x, y);

//     swap(&x, &y);

//     printf("After swapping: x = %d, y = %d\n", x, y);

//     return 0;
// }
// #include <stdio.h>

// void square(int *n)
// {
//     *n = (*n) * (*n);
// }

// int main()
// {
//     int num = 5;

//     square(&num);

//     printf("Square = %d\n", num);

//     return 0;
// }
#include <stdio.h>

int sum(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int x = 15, y = 25;

    printf("Sum = %d\n", sum(&x, &y));

    return 0;
}