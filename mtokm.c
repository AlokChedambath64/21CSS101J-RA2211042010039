#include <stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  float kilometer, meter;
  printf("Enter the distance in meter:");
  scanf("%f", &meter);
  kilometer = meter/1000;
  printf("The distance in kilometer: %f", kilometer);
  return 0;
}
