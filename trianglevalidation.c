#include <stdio.h>
#include <cs50.h>

void true_triangle(float a, float b, float c);

int main()
{
    float s1, s2, s3;
    do
    {
    s1 = get_float("What is the first side\n");
    s2 = get_float("What is the second side\n");
    s3 = get_float("What is the thrid side\n");
    }while (s1 && s2 && s3 < 0);

    true_triangle(s1, s2, s3);

    return 0;

}

void true_triangle(float s1, float s2, float s3)
{
    if ( (s1 + s2) > s3)
    {
        printf("The triangle is valid\n");
    }
    else if ((s1 + s3)> s2)
    {
        printf("The triangle is valid\n");
    }
    else if ((s2 + s3) > s1)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid\n");
    }
}
