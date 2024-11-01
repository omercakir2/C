#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void show_digits(int x ){
    int counter =0;
    int digit = 0;
    for(int i = 10 ; x%i!=x; i*=10){
        digit = (x%i)/(i/10); 
        counter ++;
        printf("%d\n",digit);
    }
    digit = x / (int)pow(10.0,counter);
    printf("%d\n",digit);
}

int main(void){
    srand(time(NULL));
    int random = rand()%1100+1;
    printf("The generated x is : %d\n",random);
    show_digits(random);
    return 0;
}
