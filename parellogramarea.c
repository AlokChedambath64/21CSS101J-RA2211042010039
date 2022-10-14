#include<stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  int height, base, area;
  printf("Enter the height of the parellogram:");
  scanf("%d", &height);
  printf("Enter the base of the parellogram:");
  scanf("%d", &base);
  
  area = height * base;
  printf("The area of your parellogram is: %d", area);
  
}
