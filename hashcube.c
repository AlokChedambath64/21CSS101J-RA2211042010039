#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // For Each Row
    for (int i=0; i < n; i++)
    {
        // For Each Coloum
        for (int j = 0; j < n; j++)
        {
            // Print a brick
            printf ("#");
        }
        // Move to next row
        printf("\n");
    }
}