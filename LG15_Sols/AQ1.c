#include <stdio.h>
#define MAX 10

void fillTheArr(int num,int* arr);//Fills the array with the digits of the number in reverse order
void sumOfBin(int *numarr1 , int *numarr2,int *sum);
void initArr(int *numarr1 , int *numarr2,int *sum);
void printArrReverse(int *arr, int size);

int main(void){
    int arr1[MAX]={0}, arr2[MAX]={0},sum[MAX]={0};
    FILE *ptr = fopen("binary.txt","r");
    if(ptr!=NULL){
        int temp1=0,temp2=0,linecounter=1;
        while (fscanf(ptr,"%d %d",&temp1,&temp2)!=EOF)
        {
            fillTheArr(temp1,arr1);
            fillTheArr(temp2,arr2);
            sumOfBin(arr1,arr2,sum);
            printf("The sum of %d. : ",linecounter);
            printArrReverse(sum,MAX);
            initArr(arr1,arr2,sum);//All elements will be 0;
            linecounter++;
        }
    }
    else{
        printf("File couldnt be opened");
    }
    return 0;
}

void fillTheArr(int num,int* arr){
    int i = 0;
    int digit=0;
    while(num>0){
        digit = num % 10;
        num /=10;
        arr[i]=digit;//Replaces the digits reverse order
        i++;
    }
    
}
void sumOfBin(int *numarr1 , int *numarr2,int*sum){
    int carry = 0 ,cnt=0;
    while(cnt < MAX){
        sum[cnt]=(numarr1[cnt]+ numarr2[cnt] + carry)%2;
        carry = (numarr1[cnt]+ numarr2[cnt] + carry)/2;
        cnt++;
    }
}
void initArr(int *numarr1 , int *numarr2,int *sum){//All elements will be zero
    for(int i =0 ; i < MAX ; i ++){
        numarr1[i]=0;
        numarr2[i]=0;
        sum[i]=0;
    }
}
void printArrReverse(int *arr, int size){
    for(int i=size-1; i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
}