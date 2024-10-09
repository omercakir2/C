#include <stdio.h>
#include <string.h>

int length(char *s){
    if (s == NULL) {
        return 0;  // Error handling: return 0 if string is NULL
    }
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return(i); 
}
char* getWords(char* s) {
    int len = length(s);

    if(len==0){
        return "";
    }

    static char words[100];
    int word_count=0,  word_index=0;
    char tempword[50];

    words[0] = '\0';


    for(int i = 0; i < len ; i ++){
        if(s[i]!=' ' && s[i]!='\0'){
             tempword[word_index++]=s[i];
             //tempword[word_index++] = s[i];
        }
        else{
            tempword[word_index]='\0';
            strcat(words, tempword);    // Add the word to result array
            //strcat(words, " ");  
            word_index=0;
        }
    }
    words[strlen(words) - 1] = '\0';  // Remove the last trailing space and null-terminate the result
    return words;
}

int main(void){
    char string[50] = "Omer cakir emre cakir faruk cakir";
    char *words = getWords(string);
    printf("%s",words);
    return(0);
}