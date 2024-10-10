#include <stdio.h>
#include <strings.h>

int main(void){
    char context[]="Hello World!";

    char array[10][15];
    int x=0,y=0;
    char temp[10];
    for(int i = 0; i<=strlen(context);i++){
        if(context[i]==' ' || context[i] == '\0'){
            strcpy(array[y++],temp);
            memset(temp,'\0',sizeof(temp));
            x=0;
        }
        else{
            temp[x++] = context[i];
        }
        
    }
    /*
    sizeof functions gives how many bytes is being used.

    for instance sizeof(int) will be 4 bytes which equals to 32 bits 
    */
    int length = sizeof(array) / sizeof(array[0]); 
    
    for(int i=length-1;i>=0;i--){
        printf("%s \n",array[i]);
    }
    return 0;

}