#include<stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  int radius, height, CSA;
  
  printf("Radius= ");
  scanf("%d", &radius);
  printf("Height= ");
  scanf("%d", &height);
  
  CSA = 2*3.14*radius*(radius+height);
  printf("%d", CSA);
  
}
