#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
bool isPrime(int number){
    for(int x =2;x*x<=number;x++){
        if(number%x==0){
            return false;
        }
    }
    return true;
}
/*

int[] primesUntil(int x){
    int i=2;
    int[] list;
    int sizeoflist = sizeof(list)/5
    while(i<=x){
        if(isPrime(i)){
            list[sizeof-1];
        }
    }
}
*/
int main(void){
    int i=2;
    int untilx;
    untilx=getInt();
    while(i<=untilx){
        bool TorF=isPrime(i);
        if(TorF==true){
            printf("%d \n",i);
        }
        i++;
    }
    
}