#include<stdio.h>

int main()
{
  float side, CSA, TSA, Volume;
  //prompt for side
  printf("Side= ");
  scanf("%f", &side);
  
  //CSA
  CSA = 4* side*side;
  printf("CSA: %f\n", CSA);
  
  //TSA
  TSA = 6* side*side;
  printf("TSA: %f\n", TSA);
  
  //Volume
  Volume = side* side*side;
  printf("Volume: %f\n", Volume);
  
}
