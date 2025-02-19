#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *mergeAlternately(char *word1, char *word2)
{
    int len1 = strlen(word1);
    int len2 = strlen(word2);

    char *str = (char *)(malloc(sizeof(char) * (len1 + len2+1)));

    int first = 0, sec = 0, third = 0;
    while (third  < len1+len2)
    {
        if(first<len1 && sec <len2){
            str[third++] = word1[first++];
            str[third++] = word2[sec++];
        }
        else if(!(first<len1)){
            str[third++] = word2[sec++];
        }
        else{
            str[third++] = word1[first++];
        }
    }
    
    str[third] = '\0';
    return str;
}
int main(void)
{
    char word1[] = "abc", 
    word2[] = "pqr",
    *word3;
    word3 = mergeAlternately(word1,word2);
    printf("%s\n",word3);
    return 0;
}