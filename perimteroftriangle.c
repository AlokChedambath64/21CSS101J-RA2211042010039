#include<stdio.h>

int main()
{
  int side1, side2, side3, perimeter;
  printf("Side-1: , Side-2:, Side-3: ");
  scanf("%d%d%d", &side1, &side2, &side3);
        
  perimeter = side1+side2+side3;
  printf("%d", perimeter);
}
