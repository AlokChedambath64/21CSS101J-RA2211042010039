#include <stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  int length, breadth, height, TSA;
  
  printf("Length= ");
  scanf("%d", &length);
  printf("Breadth= ");
  scanf("%d", &breadth);
  printf("height= ");
  scanf("%d", &height);
  
  TSA = 2*((length*breadth)+(breadth*height)+(length*height));\
  printf("TSA= %d", TSA);
  
}
  
