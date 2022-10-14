#include <stdio.h>
#include <cs50.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  string name = get_string ("Name: ");
  
  int i = 0;
    while (name[i] != '\0')
    {
      i++;
    }
  printf("%i\n", i);
}
        
  
