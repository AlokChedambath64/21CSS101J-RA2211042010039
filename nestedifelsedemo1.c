#include <stdio.h>

int main()
{
  printf("RA2211042010039\n");
  int a, b, c;
  printf("Enter three interger values : ");
  scanf("%d %d %d", &a, &b ,&c);
  
  if(a > b)
  {
    if (a > c){
      printf("%d is greater than %d and %d\n", a, b, c);
    }
    else
    {
      printf("%d is greater than %d and %\n", c, a, b);
    }
  }else{
    if (b > c)
    {
      printf("%d is greater than %d and %d\n", b, a, c);
    }
    else
    {
      printf("%d is greater than %d and %d\n", c, a, b);
    }
  }
}
