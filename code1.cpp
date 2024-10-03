#include <stdio.h>
#define PI 3.14159265359
int calculateAreaOfACircle(float r ){
    double area = (PI*r*r);
    return(area);
} 
int main (void){
    float r; /* The radius of the circle area */

    // input the value
    printf("Enter the radius of the circle area(cm)");
    scanf("%f",&r);

    // calculate and assign to a variable so that we can print
    float result = calculateAreaOfACircle(r);

    // output the result into terminal 
    printf("%f cm*2 \n",result);

    return(0);
}