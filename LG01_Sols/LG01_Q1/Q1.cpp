#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *num1, int *num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(void) {
	int num1, num2;
	do
	{
		printf("Enter first number :");
		scanf("%d", &num1);
		if (num1 <= 0) {
			printf("Please enter a positive num !\n");
		}
	} while (num1<=0);
	do
	{
		printf("Enter second number :");
		scanf("%d", &num2);
		if (num2 <= 0) {
			printf("Please enter a positive num !\n");
		}
	} while (num2 <= 0);
	printf("Before swap a=%d b=%d\n", num1, num2);
	swap(&num1, &num2);
	printf("After swap a=%d b=%d\n", num1, num2);
	return 0;
}