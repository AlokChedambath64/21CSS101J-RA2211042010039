#include<cs50.h>
#include<stdio.h>

int main(void)
{
  printf("Registration Number: RA2211042010039\n");
  int n;
  do
  {
    n=get_int("Size= ");
  }
  while(n<1||n>8);

  for (int i=0; i<n; i++)
     {
       for (int j=n-1; j>i ; j--)
         printf("%d",i);
       for (int j=0; j<=i ; j++)
         printf("%d", i);
       printf("\n");
     }
 }
