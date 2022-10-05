#include<stdio.h>
#include<math.h>
#include<cs50.h>


int main()
{
    int n, a, b, c, d,e, f, g, h, i, j, k, l;
    do
    {
    n = get_int("How many numbers do you want to add?\n");
    }
    while (n<1||n>10);

    switch (n)
    {
        case 1:
        scanf("%d", &a);
        printf("%d", a);
        break;
        case 2:
        scanf("%d%d", &a,&b);
        printf("%d", a+b);
        break;
        case 3:
        scanf("%d%d%d", &a,&b,&c);
        printf("%d", a+b+c);
        break;
        case 4:
        scanf("%d%d%d%d", &a,&b,&c,&d);
        printf("%d", a+b+c+d);
        break;
        case 5:
        scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
        printf("%d", a+b+c+d+e);
        break;
        case 6:
        scanf("%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f);
        printf("%d", a+b+c+d+e+f);
        break;
        case 7:
        scanf("%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g);
        printf("%d", a+b+c+d+e+f+g);
        break;
        case 8:
        scanf("%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h);
        printf("%d", a+b+c+d+e+f+g+h);
        break;
        case 9:
        scanf("%d%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h,&i);
        printf("%d", a+b+c+d+e+f+g+h+i);
        break;
        case 10:
        scanf("%d%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h,&i);
        printf("%d", a+b+c+d+e+f+g+h+i);
        break;
    }
}
