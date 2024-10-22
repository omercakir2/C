#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	do
	{
		printf("Enter a positive integer : ");
		scanf("%d", &num);
		if (num <= 0) {
			printf("This is not a positive integer !! \n");
		}
	} while (num <= 0);
	int counter = 0;
	while (num > 1) {
		if (num % 2 == 0) {
			num /= 2;
		}
		else {
			num = num * 3 + 1;
		}
			printf("Next value is %d\n", num);
			counter++;
	}
	printf("Number of steps : %d", counter);
	return 0;
}