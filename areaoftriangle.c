#include<stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  int height, base, area;
  printf("Enter the height of the triangle:");
  scanf("%d", &height);
  printf("Enter the base of the triangle:");
  scanf("%d", &base);
  
  area = 0.5* height * base;
  printf("The area of your triangle is: %d", area);
  
}
  
