#include <stdio.h>

void displayWord(char *arr)
{
    int i = 0;
    while (arr[i] != '\n')
    {
        printf("%c", arr[i]);
        i++;
    }
}
int isEqual(char *arr1, char *arr2)
{
    int i = 0;
    while (arr1[i] != '\n' && arr2[i] != '\n')
    {
        if (arr1[i] != arr2[i])
            return 0;
        i++;
    }
    return 1;
}
int main(void)
{
    char arr1[100], arr2[100];
    printf("Enter first word : ");
    int i = 0;
    scanf("%c", &arr1[i]);
    while (arr1[i] != '\n')
    {
        i++;
        scanf("%c", &arr1[i]);
    }

    // Enter second
    printf("Enter second word : ");
    i = 0;
    scanf("%c", &arr2[i]);

    while (arr2[i] != '\n')
    {
        i++;
        scanf("%c", &arr2[i]);
    }
    // printf("outofloop");
    displayWord(arr1);displayWord(arr2); printf("Are they same : %d",isEqual(arr1,arr2));
    return 0;
}