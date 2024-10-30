#include <stdio.h>

int main(void){
    int num ;
    do{
        printf("Enter num (4-10): ");
        scanf("%d",&num);
    }while(num<4 || num>10);
    if(num!='!'){
            for(int i = 1 ; i <num ; i++){
                for(int k = num-i ; k >=0 ; k --){
                    printf(" ");
                }
                for(int j = 1 ; j <= i*2-1 ; j += 1){
                    printf("#");
                }
                
                printf("\n");
            }
            for(int i = num ; i >=0 ; i--){
                for(int k = num-i ; k >=0 ; k --){
                    printf(" ");
                }
                for(int j = 1 ; j <= i*2-1 ; j += 1){
                    printf("#");
                }
                
                printf("\n");
            }
        
}
}