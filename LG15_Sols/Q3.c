#include <stdio.h>
#define MAX 20

int isPalindrome(char *word, int len);
void writeToFile(FILE *ptr, char *word, int len);


int main(void) {
    FILE *inp = fopen("words.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char word[MAX];
    if (inp != NULL) {
        int i = 0;
        while (fscanf(inp,"%c",&word[i])!=EOF)
        {
            if (word[i] == ' ') {
                int status = isPalindrome(word, i);
                if (status == 1) {
                    writeToFile(outp, word, i );
                }
                i = 0;
            }
            else {
                i++;
            }
        }
    }
    return 0;
}



int isPalindrome(char *word, int len) {
    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i  -1]) {
            return 0;
        }
    }
    return 1;
}

void writeToFile(FILE *ptr, char *word, int len) {
    //fprintf(ptr, "%s", word);
    for (int i = 0; i < len; i++) {
        fprintf(ptr, "%c", word[i]);
    }
    fprintf(ptr, " ");
}