#include<stdio.h>
#define MILES_TO_KMS 1.609
int main(){
    printf("RA2211042010039\n");
    float miles, kilometers;
    printf("Enter the distance in miles : ");
    scanf("%f", &miles);
    kilometers = miles*1.609;
    printf("Distance in Kilometers = %7.2f\n", kilometers);
}
