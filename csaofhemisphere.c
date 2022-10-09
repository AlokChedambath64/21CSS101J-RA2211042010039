#include<stdio.h>

int main()
{
  float radius, CSA;
  
  printf("Radius= ");
  scanf("%f", &radius);
  
  CSA = 2* 3.14 * radius * radius;
  printf("CSA=%f", CSA);
}
