#include<stdio.h>

int main()
{
	char name[50];
	printf("What is your registration number: ");
	fgets(name,50,stdin);
	printf("Your Registration number is: %s", name);
}
		
