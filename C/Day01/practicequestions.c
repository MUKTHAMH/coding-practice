// area of square
/* #include <stdio.h>
int main(){
    int side , area;
    printf("enter side:");
    scanf("%d", &side);
    area = side * side;
    printf("area of a square is :%d",area);
    return 0;
}*/
// area of circle 
#include <stdio.h>
int main (){
    float radius , area;
    float pi = 3.142;
    printf("enter the radius ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("area of circle is : %f",area);
    return 0;
}