#include <stdio.h>

int main()
{
  float radius, height, volume;
  printf("Radius: ");
  scanf("%f", &radius);
  printf("Height: ");
  scanf("%f", &height);
  
  volume = 0.33*3.14*radius*radius*height;
  printf("%f", volume);
}
