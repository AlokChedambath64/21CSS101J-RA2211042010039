#include<stdio.h>
int main(){
    printf("RA2211042010039\n");
    int num1 = 7;
    float num2 = 5.5;
    char ch='w';
    printf("Result1=%d\n",((num1 >=6) && (ch =='w')));
    printf("Result2=%d\n",((num2<11)&&(num1>100)));
    printf("Result3=%d\n", ((ch!='p') || (num1+num2)<=100));
    printf("Result4=%d\n", (!(num1>(num2+1))));

}
