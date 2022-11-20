#include<stdio.h>
int main(){
    printf("RA2211042010039\n");
    int a,b,temp;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);

    temp=a;
    a=b;
    b=temp;
    printf("Values after swapping:- a=%d,b=%d", a,b);
}
