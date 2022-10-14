#include <stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  float radius, height, volume;
  printf("Radius: ");
  scanf("%f", &radius);
  printf("Height: ");
  scanf("%f", &height);
  
  volume = 0.33*3.14*radius*radius*height;
  printf("%f", volume);
}
