#include <stdio.h>

int main()
{
  printf("Registration Number: RA2211042010039\n");
  float farenheit, celcius;
  printf("Enter the temperaturenin farenheit: ");
  scanf("%f", &farenheit);
  celcius = 5.0/9.0*(farenheit-32.0);
  printf("temperature is :%f", celcius);
  return 0;
}
