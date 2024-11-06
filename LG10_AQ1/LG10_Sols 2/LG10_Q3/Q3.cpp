#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getDigitSum(int num) {
	int sum=0;
	for (int i = 10; i <= num*10; i *= 10) {
		int digit = num % i / (i / 10);
		printf("%d\n", digit);
		sum += digit;
	}
	return sum;
}
int main(void) {
	int num = -1 ;
	do
	{
		printf("Enter a number :");
		scanf("%d", &num);

	} while (num < 0 );
	int res = 0;
	do
	{
		res = getDigitSum(num);
		num = res;
		printf("Result : %d\n", res);
	} while (res > 9);
	
	return 0;
}