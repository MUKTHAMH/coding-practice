#include <stdio.h>
float  areaofsquare(float side);
float  areaofcircle(float rad);
float  areaofrectangle(float a, float b);
int main(){
    float side=7;
    printf("area of square is: %f", areaofsquare( side * side));
    
return 0;
}
float  areaofsquare(float side){
    return side*side;
}
float  areaofcircle(float rad){
    return 3.142*rad*rad;
}
float  areaofrectangle(float a, float b){
    return a*b;
}

