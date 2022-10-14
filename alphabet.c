#include <stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);
  
  if ((c>= 'a' && c<= 'z') || (c >= 'A' && c<= 'Z"))
     printf("%c is an alphabet. ", c);
  else
     printf("%c is not an alphabet.\n", c);
}
   
