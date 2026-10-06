#include <stdio.h>
#include <math.h>

int main()
{
   int a, b;
   printf("enter two values");
   scanf("%d %d",&a, &b);
   int power = pow(a, b);
   //int power = a^b; 
  printf("power=%d",power);
  // printf("%f", 2.001+2.8);
  //float a =1.99999;
  //printf("%f",a);
    return 0;
} 
