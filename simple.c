# include<stdio.h>

 int main()
{
    printf("Registration Number: RA2211042010039\n");
    int principal,interest,year,result;
    scanf("(%d,%d,%d)", &principal, &interest, &year);
    result=(principal*interest*year)/100;
    printf("%d", result);
}
