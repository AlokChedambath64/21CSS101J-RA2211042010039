#include<stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  int length, breadth, height, volume; 
  printf("Length= ");
  scanf("%d", &length);
  printf("Breadth= ");
  scanf("%d", &breadth);
  printf("Height= ");
  scanf("%d", &height);
  
  volume = length*breadth*height;
  printf("Volume=%d", volume);
  
}
  
  
  
