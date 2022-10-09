#include<stdio.h>

int main()
{
  float base, height, lid, area;
  printf("Base 1: ");
  scanf("%f", &base);
  
  printf("Height: ");
  scanf("%f", &height);
  
  printf("Base 2: ");
  scanf("%f", &lid);
  
  printf("%f", area = ((base+lid)/2)*height);
}
  
  
