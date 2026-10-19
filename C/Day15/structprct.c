#include <stdio.h>

struct Product {
    int id;
    char name[20];
    float price;
};

int main() {
    struct Product p = {101, "Laptop", 45000};

    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Price: %.2f", p.price);

    return 0;
}