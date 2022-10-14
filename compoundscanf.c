#include<stdio.h>
#include<math.h>

int main()
{
	printf("Registration Number: RA2211042010039\n");
	float principal, rate, time, CI;
	//input principal
	printf("Enter Principal Amount: ");
	scanf("%f", &principal);
	//input rate
	printf("Enter Rate: ");
	scanf("%f", &rate);
	//input time
	printf("Enter Time: ");
	scanf("%f", &time);
	
	//Calculation of compound Interest
	CI= principal*(pow((1+rate/100), time));
	printf("Final Amount: %f", CI);
	
	return 0;
}
		
