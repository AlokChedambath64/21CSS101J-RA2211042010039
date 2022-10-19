#include <stdio.h>
#include <cs50.h>

int main()
{
    int cents, quarters, dimes, nickels, pennies;

    do
    {
        cents = get_int("How many cents as change = ");
    }
    while (cents<=0);

    //calculating the amount of quarters
    quarters = cents/25;
    printf("Quarters = %i\n", quarters);

    //calculating the amount of dimes
    cents = cents%25;
    dimes = cents/10;
    printf("Dimes = %i\n", dimes);

    //calculating the amount of nickels
    cents = cents%10;
    nickels = cents/5;
    printf("Nickels= %i\n", nickels);

    //calculating the amount of pennies
    cents = cents%5;
    pennies = cents/1;
    printf("pennies= %i\n", pennies);
}
