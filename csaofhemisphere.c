#include<stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  float radius, CSA;
  
  printf("Radius= ");
  scanf("%f", &radius);
  
  CSA = 2* 3.14 * radius * radius;
  printf("CSA=%f", CSA);
}
