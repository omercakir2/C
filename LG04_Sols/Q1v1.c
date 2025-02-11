#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 10

int readFile(FILE *ptr, char ***words);
void dispWord(char **words, int word_count);
void freeWords(char **words, int word_count);

int main(void)
{
    FILE *ptr = fopen("words.txt", "r");
    if (ptr == NULL)
    {
        printf("Cannot open the file!\n");
        return -1;
    }

    char **words = NULL;
    int word_count = readFile(ptr, &words);
    fclose(ptr);  // Close file after reading

    if (word_count > 0)
    {
        dispWord(words, word_count);
        freeWords(words, word_count);  // Free allocated memory
    }

    return 0;
}

int readFile(FILE *ptr, char ***words)
{
    if (ptr == NULL)
    {
        printf("An error has occurred while reading the file\n");
        return -1;
    }

    int word_count;
    if (fscanf(ptr, "%d", &word_count) != 1) // Read number of words
    {
        printf("Error reading word count!\n");
        return -1;
    }

    // Allocate memory for words array
    *words = (char **)malloc(word_count * sizeof(char *));
    if (*words == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    // Allocate memory for each word and read from file
    for (int i = 0; i < word_count; i++)
    {
        (*words)[i] = (char *)malloc((MAX_LEN + 1) * sizeof(char)); // +1 for null terminator
        if ((*words)[i] == NULL)
        {
            printf("Memory allocation failed!\n");
            return -1;
        }
        fscanf(ptr, "%s", (*words)[i]); // Read word from file
    }

    return word_count;
}

void dispWord(char **words, int word_count)
{
    printf("Words\n*******\n");
    for (int i = 0; i < word_count; i++)
    {
        printf("%s\n", words[i]);
    }
}

void freeWords(char **words, int word_count)
{
    for (int i = 0; i < word_count; i++)
    {
        free(words[i]); // Free each word
    }
    free(words); // Free array of pointers
}
