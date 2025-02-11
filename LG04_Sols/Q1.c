#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 10

int readFile(FILE *ptr, char **words);
void dispWord(char **words, int word_count);

int main(void)
{
    FILE *ptr = fopen("words.txt", "r");
    if (ptr == NULL)
    {
        printf("Cannot open the file !");
        return -1;
    }
    char **words;
    int word_count = readFile(ptr, words);
    dispWord(words,word_count);
    return 0;
}

int readFile(FILE *ptr, char **words)
{ // Reads file and puts words into a 2dim array
    if (ptr == NULL)
    {
        printf("An error has occured while reading the file");
        return -1;
    }
    int word_count;
    fscanf(ptr, "%d", &word_count);
    words = (char **)(malloc(sizeof(char *) * word_count));
    if (words == NULL)
    {
        printf("Memory allocation has failed !");
        return -1;
    }
    int i; // loop counter
    for (i = 0; i < word_count; i++)
    {
        *(words + i) = (char *)(malloc(sizeof(char) * MAX_LEN));
        if (*(words + i) == NULL)
        {
            printf("Memory allocation has failed !");
            return -1;
        }
    }
    int r = 0, c = 0;
    char temp_ch;
    while (fscanf(ptr, "%c", &temp_ch) != EOF)
    {
        if (temp_ch != '\n')
        {
            *(*(words + r) + c) = temp_ch;
            c++;
        }
        else
        {
            r++;
            c = 0;
        }
    }
    return word_count;
}
void dispWord(char **words, int word_count)
{
    printf(" Words\n*******\n");
    int i, j;
    for (i = 0; i < word_count; i++)
    {
        for (j = 0; j < MAX_LEN; j++)
        {
            printf("%c", *(*(words + i) + j));
        }
        printf("\n");
    }
}
