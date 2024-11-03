#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand(time(NULL));
	int num = rand() % 1100 + 1;
	printf("The number generatered is  : %d", num);

	for (int i = 10; i <= num*10; i *= 10) {
		int digit = num % i / (i / 10);
		printf("The digit is : %d", digit);
	}

	return 0;
}