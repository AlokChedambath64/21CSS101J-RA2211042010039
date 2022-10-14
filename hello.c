#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Registration Number: RA2211042010039\n");
    string answer= get_string("What's your name?\n");
    printf("hello, %s\n", answer);
}
