#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int findNumOfDigits(int number){
    int counter = 1;
    for(int i = 10;i<=number;i*=10){
        counter++;
        
    }
    printf("Number of digits is %d \n",counter);
    return counter;
}

bool isAutomorphic(int number){
    int square = pow(number,2);
    int ending = square%(int)pow(10,findNumOfDigits(number));

    printf("Number : %d\n",number);
    printf("Square : %d\n",square);
    printf("Ending  : %d\n",ending);
    if(ending==number){
        return true;
    }
    return false;
}

int main(void){
    int number;
    do
    {
        printf("Enter a number : ");
        scanf("%d",&number);
        if(number>=0){
            if(isAutomorphic(number)){
                printf("This is a automorphic number");
            }
            else{
                printf("This is NOT a automorphic number");
            }
        }
    } while (number >= 0);
    
    return 0;
}