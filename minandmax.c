#include <stdio.h>

int main()
{
  printf("RA2211042010039\n");
  int a, b, c;
  printf("Enter 3 numbers : ");
  scanf("%d %d %d", &a, &b, &c);
  
  if (a>b&&a>c)
  {
    if (b>c)
    {
      printf("The max and min of three numbers are : %d %d\n", a,c);
    }
    else 
    {
      printf("The max and min of three numbers are : %d %d\n", a, b);
    }
  }
  else if (b>c&&b>a)
  {
    if (a>c)
    {
      printf("The max and min of three numbers are : %d %d\n", b, c);
    }
    else
    {
      printf("The max and min of three numbers are : %d %d\n", b, a);
    }
  }
  else if (c>b&&c>a)
  {
    if (a>b)
    {
      printf("The max and min of three numbers are : %d %d\n", c, b);
    }
    else
    {
      printf("The max and min of three numbers are : %d %d\n", c, a);
    }
  }
}
