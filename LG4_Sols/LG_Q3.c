#include <stdio.h>
#include <math.h>
int main(void){
    double cost,price;

    printf("Enter the cost : ");
    scanf("%lf",&cost);

    printf("Enter the price : ");
    scanf("%lf",&price);

    double profit = fabs(cost-price);

    if(cost>price){
        printf("Loss is %0.2f",profit);
    }
    else{
        printf("Profit is %0.2f",profit);
    }

}