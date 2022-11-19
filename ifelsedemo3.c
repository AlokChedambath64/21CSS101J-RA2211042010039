#include <stdio.h>
void main(){
  int number;
  printf("RA2211042010039\n");
  printf("Enter an integer value: ");
  scanf("%d", &number);
  
  if ((number % 2) == 0) 
  {
    printf("The given number %d is an even number\n", number);
  }
  else 
  {
    printf("The given number &d is an odd number\n", number);
  }
}
