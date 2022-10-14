#include<stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  int base, exp;
  long double result = 1.0;
  printf("Enter a base number: ");
  scanf("%d", &exp);
  
  while (exp !=0)
  {
    result *= base; 
    --exp;
  }
  printf("Answer = %.0Lf", result);
  return 0;
}
