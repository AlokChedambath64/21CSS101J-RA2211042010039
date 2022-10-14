#include<stdio.h>

int main ()
{
  printf("Registration Number: RA2211042010039\n");
  int dividend, divisor, quotient, remainder;
  printf("Enter dividend: ");
  scanf("%d", &dividend );
  printf("Enter divisor: ");
  scanf("%d", &divisor);
        
  quotient = dividend/ divisor;
        
  remainder = dividend % divisor;
        
  printf("Quotient = %d\n", quotient);
  printf("Remainder = %d", remainder);
       
}
    
