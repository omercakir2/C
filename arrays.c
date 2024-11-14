#include <stdio.h>
#include <stdlib.h>
int len(int *array) {
    return sizeof(array)/sizeof(int)

}

/*
void printf3sum(int *array , int size){  
    for()
}
*/


int main(void){
    
    /*1D array *//*
    int size = 10 ;
    int *array = malloc(size * sizeof(int));

    for(int i = 0 ; i <size ; i++){
        array[i]=i;
    }
    for(int i = 0 ; i <size ; i++){
        printf("The %d. index is %d\n",i,array[i]);
    }
    free(array);
    */
   /*
   int size = 3;
   int **array = malloc(size * sizeof(int*));

   

   for(int i = 0 ; i < size ; i ++){
        array[i] = malloc(size * sizeof(int));
        for(int j = 0 ; j < size ; j ++ ){
            array[i][j]=j;
        }
   }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    

   free(array);
   */
  int array[10];

  printf("The lenght is %d \n",len(array));
  return 0;
}