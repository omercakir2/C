#include <stdio.h>

int main(void){
    char j;
    printf("Enter j : ");
    scanf(" %c",&j);
    for(int i = 65;i<=j;i++){  
        for(char letter = 'A';letter<=i;letter++){
            printf("%c",letter);
        }
    printf("\n");
    }
    return 0;
}