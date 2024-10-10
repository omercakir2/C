// |num1-num2| x 12 = 60 OR (num1/num2≠-2)’ AND (num2 - 1) / (num1 + 9) > 0


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (void){
    int num1,num2;
    printf("Enter the num1 : ");
    scanf("%d",&num1);
    printf("Enter the num2 : ");
    scanf("%d",&num2);


    int res;
    res = abs(num1-num2)*12 == 60 || (num1/num2==-2) && (num2 - 1) / (num1 + 9) > 0;

    printf("The result is %d",res);

}