#include <stdio.h>

int main(){
    FILE *fileptr = fopen("grades.txt","r");
    

    int temp;
    int counter = 0;
    int min = 100;
    int above40=0;
    double average=0;
    while(fscanf(fileptr,"%d",&temp)==1){
        counter++;
        if(temp<min){
            min=temp;
        }
        if(temp>=40){
            above40++;
            average = average+temp;
        }
        
    }
    average /= above40;
    printf("The number of students is %d\n",counter);
    printf("The minimum note is %d \n",min);
    printf("The number of student above 40 is %d\n",above40);
    printf("Average of grades above 40 is %.2f\n",average);
    
    
    
    
    fclose(fileptr);
    return 0;
}