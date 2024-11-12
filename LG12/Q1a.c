#include <stdio.h>

int main(){
    FILE *pfile = fopen("data.txt","r");

    int number;
    int sum = 0 ;
    printf("The numbers are : ");
    while(fscanf(pfile,"%d",&number)==1){
        printf("%d ",number);
        sum+=number;
    }
    printf("\nSum of all numbers is : %d \n ",sum);
    fclose(pfile);
}