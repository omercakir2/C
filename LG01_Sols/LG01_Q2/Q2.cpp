#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void) {
	FILE *ptr = fopen("reverse.txt", "w");
	if (!(ptr == NULL)) {
		srand(time(NULL));
		int many = 0,number;
		do
		{
			printf("How many number you wanna generate :");
			scanf("%d", &many);
			if (many < 0) {
				printf("Please enter a non-negative number\n");
			}
		} while (many<0);
		for (int i = 0; i < many; i++) {
			number = rand() % 9000 + 1000;
			fprintf(ptr, "%d", number);
			while (number > 0) {
				fprintf(ptr, "\t%d", number % 10);
				number /= 10;

			}
			fprintf(ptr, "\n");
		}
	}
	return 0;
}