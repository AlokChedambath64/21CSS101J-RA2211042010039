#include <stdio.h>

int main()
{
  float kilometer, meter;
  printf("Enter the distance in meter:");
  scanf("%f", &meter);
  kilometer = meter/1000;
  printf("The distance in kilometer: %f", kilometer);
  return 0;
}
