#include <stdio.h>
#include "functions.h"
int proDigits(int num){
    do{
        int x;
        if(num==0){ // directly return 0 
            return 0;
            break;
        }
        else if(num<0){ // if number is negative it will stop
            return 0;
            break;
        }
        else{
            int sum=1;
            while(num){

                int digit  =num % 10;
                num = num/10;
                sum = sum*digit;
            }
            printf("%d",sum);
            return sum;
            break; 
        }
    }
    while(1);
}
int main(void){
    int num;
    do
    {
        num = getInt();
    } while (num<0);
    printf("Products of digits is : ");
    proDigits(num);
}