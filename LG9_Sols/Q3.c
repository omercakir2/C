#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){
    srand(time(NULL));
    int j = rand()%26+1;
    printf("Randomly generated number : %d \n",j);
    for(int i = 65;i<=j+65;i++){  
        for(char letter = 'A';letter<i;letter++){
            printf("%c",letter);
        }
    printf("\n");
    }
}