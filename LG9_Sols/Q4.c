#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int selection = 1, num;

    srand(time(NULL)); // Seed the random number generator only once

    do {
        
        do {
            printf("MENU-------------\n1. Right Triangle\n2. Isosceles Triangle\n3. Exit\nEnter your choice: ");
            scanf("%d", &selection);
        } while (selection < 1 || selection > 3);
        
        
        if (selection != 3) {
            num = rand() % 7 + 3;
            printf("Random generated number: %d\n", num);
        }

        switch (selection) {
            case 1:
                for (int i = 0; i <= num; i++) {
                    for (int j = 0; j < num - i; j++) {
                        printf(" ");
                    }
                    for (int k = i; k > 0; k--) {
                        printf("%d", k);
                    }
                    printf("\n");
                }
                break;
                
            case 2:
                for (int i = 0; i <= num; i++) {
                    for (int j = 0; j < num - i; j++) {
                        printf(" ");
                    }
                    for (int k = i; k > 0; k--) {
                        printf("%d", k);
                    }
                    for(int l =2 ; l<=i ; l++ ){
                        printf("%d",l);
                    }
                    printf("\n");

                }
                break;
        }

    } while (selection != 3);

    return 0;
}
