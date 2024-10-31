#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int get_Random(int first , int last){
    int x = rand()%last + first;
    //printf("Random numbers is : %d\n",x);
    return x;
}
int main(void){
    srand(time(NULL));
    int random_number = get_Random(20,70),guess;
    printf("Try to guess the number between 20 and 70 . \n");
    do
    {
        printf("Enter your guess : ");
        scanf("%d",&guess);
    } while (guess<20 || guess >70);
    
    
    if (guess==random_number)printf("You found the number !!\n");
    else printf("Sorry :(\n");
    return 0 ;
}