/*
    KAPREKAR NUMBER

    Examples : 45 to the power of 2  = 2025 and 20 + 25 = 45
                297 * 297 = 88209 and 88 + 209 = 297 
    
    Take square of the number and split it into two part
    The number of digits left part have must be equal to the number of digits the original number has
*/

#include <stdio.h>
#include <math.h>

int isKaprekar(int num);

int main(void){
    
        printf("%d\n",isKaprekar(297));
    
    return 0;
}


int isKaprekar(int num){
    int square = num*num;
    int numOfDigits = 1;
    for(int i = 10 ;num%i!=num ; i*=10){
        numOfDigits++;
    }
    int rightPart = square % (int)(pow(10,numOfDigits));
    int leftPart=0;
    if(rightPart != square){
        leftPart = square / (pow(10,numOfDigits));
    }
    if(leftPart+rightPart==num){
        return 1;
    }
    else{
        return 0;
    }

}