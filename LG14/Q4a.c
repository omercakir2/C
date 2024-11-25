#include <stdio.h>
#define MAX 20
void display(int *arr , int size);

int main(void){
    FILE *ptr = fopen("numbers.txt","r");
    int arr[MAX]={0};//Init array with 0
    int size = 0, num;
    if(ptr==NULL){
        printf("ERROR!\n");
    }
    else{
        while (fscanf(ptr,"%d",&num)!=EOF)
        {
            arr[size]=num;
            size++;
        }
    
    }
    printf("Array content before delete :\n");
    display(arr,size);

    do
    {
        printf("Enter the index of the element to be deleted(0-%d):",size-1);
        scanf("%d",&num);
    } while (num<0 || num > size-1);

    printf("The value %d which is on the index %d will be deleted!\n",arr[num],num);
    
    //DELETE with sliding the array. 
    for(int j = num;j<size-1;j+=1){
        arr[j]=arr[j+1];
        arr[j+1] = 0;
    }
    size--;
    display(arr,size);
    fclose(ptr);
    return 0;
}
void display(int *arr , int size){
    printf("There are %d elements in this array !! \n", size);
    int i;
    for(i=0;i<size;i++){
        printf("[%d]\t%1d\n",i,arr[i]);
    }
}