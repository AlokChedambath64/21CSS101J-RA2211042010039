#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two integer values : ");
    scanf("%d %d", &a,&b);
    printf("Before swapping values a=%d,b=%d\n", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping values a=%d,b=%d\n",a,b);
}
