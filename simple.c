# include<stdio.h>

 int main()
{
    int principal,interest,year,result;
    scanf("(%d,%d,%d)", &principal, &interest, &year);
    result=(principal*interest*year)/100;
    printf("%d", result);
}