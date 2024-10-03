#include <stdio.h>
#include "functions.h"
int main(void){
    /*
        the function scanf takes the input
        from the device (keyboard) and puts it in a variable
    */
    /*
        Syntex for it ; 
        scanf(format string,variable adrress (&variable))    
    */    
    /*
        & is the address operator 
    */
   sayHelloWorld();
    double x = getDouble();
    double * pointer_x = &x;
    printf("%p \n ",pointer_x);
    return 0;
}