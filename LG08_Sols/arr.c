#include <stdio.h>
#include <string.h>
#define MAX 6

typedef struct
{
    char name[10], code[5];
} course_t;

int searchCrs(course_t *codeList, char *search_course)
{
    for (int i = 0; i < MAX; i++)
    {
        if (strncmp(search_course, (codeList+i)->name, strlen(search_course)) == 0)
            return i;
    }
    return -1;
}

int main(void)
{
    FILE *ptr = fopen("course.txt", "r");
    if (ptr == NULL)
        return -1;
    course_t codeList[MAX] = {{"CS", "11"}, {"THM", "61"}, {"CTIS", "62"}, {"ECON", "32"}, {"HIST", "94"}, {"TURK", "95"}};
    char name[10], code[5],temp[20];
    int i;
    while (fscanf(ptr, "%s %s", name, code) != EOF)
    {
        i = searchCrs(codeList, name);
        //printf("i: %d\n",i);
        if (i != -1)
        {   
            strcpy(temp,codeList[i].code);
            strcat(temp,code);
            printf("%s %s --> %s\n", name, code, temp);
        }
    }
    return 0;
}
