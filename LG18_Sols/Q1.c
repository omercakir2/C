//Omer Cakir
// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 9

void fillPattern(int arr[][SIZE], int dim)
{   int r,c=0;
    int d=0;
    for (r = dim / 2; r >= 0; r--)
    {
        for (c = d; c < dim+d  ; c++)
        {
            arr[r][c] = 1;
        }
        d++;
        dim -= 2;

    }
}
void display(int arr[][SIZE])
{
    printf("Matrix\n");
    for (int r = 0; r < SIZE; r++)
    {
        for (int c = 0; c < SIZE; c++)
        {
            printf("%d\t", arr[r][c]);
        }
        printf("\n");
    }
}
int main(void)
{
    int arr[SIZE][SIZE] = {0};
    fillPattern(arr, 5);
    display(arr);
    return 0;
}