#include <stdio.h>
//Run it and compare the results in terminal
int main(void){
    double num = 25.89;
    printf("%f\n",num);
    printf("%6.1f\n",num);
    printf("%5.4f\n",num);
    printf("%4.0f\n",num);
    printf("%7.2f\n",num);
    printf("%-7.2f\n",num);
    printf("%0.2f\n",num);
}