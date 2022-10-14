#include <stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  float radius, TSA;
  printf("Radius: ");
  scanf("%f", &radius);
  
  TSA = 3*3.14*radius*radius;
  printf("TSA=%f", TSA);
}
