#include<stdio.h>
#define TEMP 20
int main(){
    printf("RA2211042010039\n");
    printf("%d\n", TEMP);
        #ifdef TEMP
            #undef TEMP
            #define TEMP 99
        #else
            #define TEMP 999
        #endif
        printf("%d\n", TEMP);

}
