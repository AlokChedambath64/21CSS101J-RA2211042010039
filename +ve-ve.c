#include <stdio.h>

int main()
 {
  printf("Registration Number: RA2211042010039\n");
  int n;
  printf("Please type in your number: ");
  scanf("%d", &n);
  
  if (n>0)
  {
  printf("The number is positive\n");
  }
  else if (n<0)
  {
  printf("The number is negitive\n");
  }
 }
