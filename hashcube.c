#include<stdio.h>
#include<cs50.h>

int main(void)
{
	printf("Registration Number: RA2211042010039\n");
	int n;
	do 
	{
		n=get_int("Size: ");
	}
	while(n<1||n>8);
	
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
