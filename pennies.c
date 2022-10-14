// Libraries (e.g., rounding with 4.20)

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("Registration Number: RA2211042010039\n");
    float amount = get_float("Dollar Amount: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i\n", pennies);
}
