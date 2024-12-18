#include <stdio.h>
#define SIZE 9
void readFromFile(FILE *file_ptr, char words[][SIZE]);
void displayTwoDim(char words[][SIZE]);
void displayDimension(char words[][SIZE], int dim);
int main(void)
{
    FILE *ptr = fopen("words.txt", "r");
    if (ptr == NULL)
    {
        printf("Error!");
    }
    else
    {
        char words[SIZE][SIZE];
        readFromFile(ptr, words);

        int dim;
        while (dim != -1)
        {
            do
            {
                printf("Enter dim[1-9](-1 to stop) :");
                scanf("%d",&dim);
            } while (!((dim >= 1 && dim <= 9) || dim == -1));
            if(dim!=-1){
                displayDimension(words,dim);
            }
        }
    }
    return 0;
}
void readFromFile(FILE *file_ptr, char words[][SIZE])
{
    char temp;
    int r = 0, c = 0;
    while (fscanf(file_ptr, "%c", &temp) != EOF)
    {
        if (temp == '\n')
        {
            r++;
            c = 0;
        }
        else
        {
            words[r][c] = temp;
            c++;
        }
    }
}

void displayTwoDim(char words[][SIZE])
{
    for (int r = 0; r < SIZE; r++)
    {
        for (int c = 0; c < SIZE; c++)
        {
            printf("%c", words[r][c]);
        }
        printf("\n");
    }
}
void displayDimension(char words[][SIZE], int dim)
{
    int i, j; // counter
    // display major
    printf("The major is : ");
    for (i = 0; i < dim; i++)
    {
        printf("%c", words[i][i]);
    }

    printf("\nThe minor is : ");
    i = 0;
    j = dim - 1;
    while (i < dim && j > -1)
    {
        printf("%c", words[i][j]);
        i++;
        j--;
    }
    printf("\n");
}