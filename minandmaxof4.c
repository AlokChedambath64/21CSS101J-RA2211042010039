#include <stdio.h>

int main()
{
  int a, b, c, d;
  printf("Enter 4 numbers : ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  
  printf("Max value : ");
  if (a > b && a > c && a > d)
  {
    printf("%d\n", a);
  }
  else if (b > a && b > c && b > d)
  {
    printf("%d\n", b);
  }
  else if (c > a && c > b && c >d) 
  {
    printf("%d\n", c);
  }
  else
  {
    printf("%d\n", d);
  }
  
  printf("Min value : ");
  if (a < b && a < c && a < d)
  {
    printf("%d", a);
  }
  else if (b < a && b < c && b < d)
  {
    printf("%d", b);
  }
  else if (c < a && c < b && c < d)
  {
    printf("%d", c);
  }
  else
  {
    printf("%d", d);
  }
}

    
