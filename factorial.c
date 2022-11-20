#include<stdio.h>
int main(){
    printf("RA2211042010039\n");
    int i,n,factorial =1;
    printf("Enter an integer : ");
    scanf("%d", &n);
    i=2;
    while(n>=i){
        factorial = factorial*i;
        i++;
    }
    printf("The factorial of given number %d = %d\n", n, factorial);
}
