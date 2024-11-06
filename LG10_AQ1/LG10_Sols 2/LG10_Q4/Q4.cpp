#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int convertTobase(int base, int number) {
	int sum = 0;
	int counter = 0;
	for (int i = 10; i <= number * 10; i *= 10) {
		int digit = number % i / (i / 10);
		sum += digit * pow(base,counter);
		counter++;
	}
	printf("%d\n", sum);
	return sum;
}
int main(void) {
	convertTobase(8, 210);
}
