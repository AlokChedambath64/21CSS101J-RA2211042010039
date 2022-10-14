#include<stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  int side, Volume;
  printf("Side= ");
  scanf("%d", &side);
  
  Volume = side* side*side;
  printf("Volume: %d", Volume);
  
}
