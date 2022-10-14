#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
	{
	printf("Registration Number: RA2211042010039\n");
	//Input Principal, Rate and Time
	float principal = get_float("Enter Principal Amount: ");
	float rate = get_float("Enter Rate: ");
	float time = get_float("Enter Time: ");
	
	//Calculation of Compound Interest
	float CI;
	CI= principal*(pow((1 + rate / 100), time));
	
	//Print the resultant CI
	printf("Compound Interest = %f", CI);
	
	}
