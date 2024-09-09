#include <stdio.h>
int displayTriangle(int num){
    int i,j;
    for(i=0;i<num;i++){
        for(j=0;j<i+1;j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
int getInt(){
    int num;
    printf("Enter the integer");
    scanf("%d", &num);
    return num;
}

int main(void){
    displayTriangle(getInt());
}
    

