#include<stdio.h>

int main()
{
  float perimeter, length, base;
  printf("Base: ");
  scanf("%f", &base);
  printf("Length:");
  scanf("%f", &length);
         
  printf("%f", perimeter = 2*(length*base));
}
