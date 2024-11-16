#include <stdio.h>
#include <math.h>

double factoriel(double x){
    double res=1;
    for(int i = x ; i > 0 ; i--){
        res *= i;
    }
    return res;
}

int main(void){
    double number;//x 
    do
    {
        printf("Enter the x : ");
        scanf("%lf",&number);
        if(number == 2 ){
            printf("Division by zero !!");
        }
    } while (number==2);

    double res;//res
    int sign = -1;
    for(int i = 2 ; i <=14;i+=2){
        res += sign*(factoriel(i)/pow((number-2),i+1));
        sign *= -1;
    }
    printf("The result is %.4f\n",res);
    return 0;
    
}
