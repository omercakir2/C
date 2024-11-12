#include <stdio.h>

int main(){
    FILE *pfile = fopen("data.txt","r");

    int number;
    int counter = 0,odd= 0 ;
    int sum=0;
    
    while(fscanf(pfile,"%d",&number)==1){
        counter++;
        if(number%2!=0){
            printf("%d is odd!\n",number);
            odd++;
            sum+=number;
        }
    }
    printf("There is %d integer numbers  \n ",counter);
    printf("%d of them is odd integers and average of them is %0.2f",odd,(double)sum/odd);
    fclose(pfile);
}