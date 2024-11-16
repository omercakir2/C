#include <stdio.h>

int main(void){
    FILE *inputptr , *outputptr;
    inputptr = fopen("sentence.txt","r");
    outputptr = fopen("output.txt","w");

    if(inputptr==NULL){
        printf("Something went wrong !!! \n");
    }
    else{
        fprintf(outputptr,"%s","These are the words and their word count\n_________________________\n");
        char ch;
        int counter = 0 ;
        int words = 0;
        while(fscanf(inputptr,"%c",&ch)!=EOF){
            if(ch==' '||ch=='\n'){
                fprintf(outputptr,"%c",' ');
                fprintf(outputptr,"%d",counter);
                fprintf(outputptr,"%c",'\n');
                counter = 0;
                words ++;
            }
            else{
                counter ++;
                fprintf(outputptr,"%c",ch);
            }
        }
        fprintf(outputptr,"%c",' ');
        fprintf(outputptr,"%d",counter);
        printf("There are %d word(s) in this file . \n", words+1);
    }
}

