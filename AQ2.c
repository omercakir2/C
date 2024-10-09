#include <stdio.h>
#include <math.h>

int main(void){
    int binary = 11011;
    int decimal=0,digit;
    int i=10;
    int x=0;
    while(binary>0){
        digit = binary % i;
        decimal = decimal + digit*pow(2,x);
        binary = binary / 10;
        x=x+1;
    }
    printf("%d",decimal);
    return(0);
}