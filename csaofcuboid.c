#include <stdio.h>

int main()
{
  int height, length, breadth, CSA;
  
  printf("Height= ");
  scanf("%d", &height);
  printf("Lenght= ");
  scanf("%d", &length);
  printf("Breadth= ");
  scanf("%d", &breadth);
  
  CSA= 2*height*(length+breadth);
  printf("CSA= %d", CSA);
  
}
