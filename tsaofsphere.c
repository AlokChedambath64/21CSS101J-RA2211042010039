#include<stdio.h>

int main()
{
  float radius, TSA;
  printf("Radius: ");
  scanf("%f", &radius);
  
  TSA = 4*3.14*radius*radius;
  printf("%f", TSA);
}
