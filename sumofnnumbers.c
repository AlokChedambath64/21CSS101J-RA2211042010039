#include<stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  int n, i, sum=0;
  printf("Enter the number: ");
  scanf(" %d", &n);
  
  for (i=1; i <=n; ++i)
  {
    sum +=i;
  }
  printf("Sum = %d", sum);
  return 0;
}
