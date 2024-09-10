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
      int num;  
    do // it will repeat until the number is between 5 and 15
    {
      num = getInt();
      if(num>=5 && num <=15){
        break;
      }
    } while (1);

    displayTriangle(num);
}
    

