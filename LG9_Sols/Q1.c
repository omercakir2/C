#include <stdio.h>
#include <stdlib.h> // for abs() function to get the absolut value of it.
#include <math.h> // pow() and sqrt()

double f(double x){
    double res;
    if(x<=0){
        res = 0;
    }else if(x<=10){
        res = 3/(sqrt(pow(x,3)+1));
    }else{
        res = fabs(x)+pow(x,5);
    }
    return res;
}

int main(void){
    double x;
    for(int i = 1 ;i <= 5;i++){
        printf("Enter the %d. value of X : ",i);
        scanf("%lf",&x);
        printf("f(%0.1f) = %0.3f \n",x,f(x));
    }
    return 0;
}
