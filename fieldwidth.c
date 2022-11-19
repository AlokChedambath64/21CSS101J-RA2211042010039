#include <stdio.h>

int main()
{
  int a;
  printf("number: ");
  scanf("%d field width", &a);
  printf("%2d field width", a);
  printf("%6d field width", a);
  printf("%-6d with mins sign", a);
}
