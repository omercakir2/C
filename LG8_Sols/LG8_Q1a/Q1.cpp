#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num=0;
	do
	{
		printf("Enter a positive integer : ");
		scanf("%d", &num);
		if (num <= 0) {
			printf("This is not a positive integer !! \n");
		}
	} while (num<=0);
	if (num % 2 == 0) {
		printf("The number is even");
	}
	else {
		printf("The number is odd");
	}
	return 0;
}