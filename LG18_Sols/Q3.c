
#include <stdio.h>
#define MAX 10

void abbreviate(char *arr, int size, char *outputarr, int *outsize);

int main(void)
{
    char text[] = "Omer Cakir";
    char abb[MAX];
    int outsize;
    abbreviate(text, MAX, abb, &outsize);
    return 0;
}

void abbreviate(char *arr, int size, char *outputarr, int *outsize)
{
    outputarr[0]=arr[0];
    int cnt = 1, cnt1 = 1;
    while (arr[cnt] != '\0')
    {
        cnt++;
        if (arr[cnt - 1] == ' ' && arr[cnt] != '\n')
        {
            outputarr[cnt1] = arr[cnt];
            cnt1++;
        }
    }
    *outsize = cnt1;
}