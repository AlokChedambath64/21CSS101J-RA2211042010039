#include<stdio.h>

int main()
{
  int side, Volume;
  printf("Side= ");
  scanf("%d", &side);
  
  Volume = side* side*side;
  printf("Volume: %d", Volume);
  
}
