// Gives the explanation by looking at the url like edu.tr k12 , net or something

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
#define MAX_NAME 10
#define MAX_EXT 50
#define MAX_URL 50
#define RUN 1
#define NOTRUN 0

typedef struct
{
    char name[MAX_NAME];
    char explanation[MAX_EXT];
} extention_t;

int read(FILE *filePtr, extention_t *arr)
{
    if (filePtr == NULL)
    {
        printf("File cannot be opened !\n");
        return -1;
    }

    char extention[MAX_EXT],
        explanation[MAX];

    int num = 0, r = 0;

    while (fscanf(filePtr, "%s %[^\n]", extention, explanation) != EOF)
    {
        strcpy(arr[r].name, extention);
        strcpy(arr[r].explanation, explanation);
        r++;
        num++;
    }
    return num;
}

int search(extention_t *arr, int len, char *name)
{
    for (int i = 0; i < len; i++)
    {
        if (strcmp(arr[i].name, name) == 0)
            return i;
    }
    return -1;
}
void takeExt(char *url, char *ext)
{
    int len = strlen(url), dots[2], dotcount = 0,
        i = len - 1;

    while (dotcount != 2)
    {
        if (url[i] == '.')
        {
            dots[dotcount] = i;
            dotcount++;
        }
        i--;
    }
    strncpy(ext, url + dots[1] + 1, dots[0] - dots[1] - 1);
}
int main(void)
{
    FILE *ptr = fopen("extensions.txt", "r");

    if (ptr == NULL)
    {
        printf("File cannot be opened!");
    }
    else
    {

        extention_t arr[MAX];
        int len = read(ptr, arr), status = RUN;

        char url[MAX_URL], ext[MAX_EXT];

        // printf("Enter a website  url :(type END to close the program)");
        // scanf("%s", url);
        while(1)
        {
            printf("Enter a website  url :(type END to close the program)");
            scanf("%s", url);
            if (strcmp(url, "END") == 0)
            {
                status = NOTRUN;
                break;
            }
            takeExt(url, ext);

            int index = search(arr, len, ext);
            if (index != -1)
            {
                printf("%s extension is ised for %s\n", ext, arr[index].explanation);
            }
            else
            {

                printf("The search extension(%s) is NOT in the list\n", ext);
            }
        } 
    }
    fclose(ptr);
    return 0;
}