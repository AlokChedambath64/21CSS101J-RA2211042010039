#include <stdio.h>

int main()
{
  float radius, TSA;
  printf("Radius: ");
  scanf("%f", &radius);
  
  TSA = 3*3.14*radius*radius;
  printf("TSA=%f", TSA);
}
