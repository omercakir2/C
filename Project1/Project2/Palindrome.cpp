// Leetcode easy category

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int getDigitLen(int x) {
	int counter = 0;
	for (int i = 10; x%i<x ;i *= 10) {
		counter++;
	}
	return counter+1;
}

bool isPalindrome(int x) {
	if (x < 0) {
		return false;
	}
	else if (0) {
		return true;
	}
	else {
		int len = getDigitLen(x);
		int i, j;
		i = 10;
		j = pow(10, len);
		while(i <= pow(10, len) && j >= 10){
			int a = x % i / (i/10);
			int b = x % j / (j/10);
			if (a != b) {
				printf("The number is NOT palindrome\n");
				return false;
			}
			i *= 10;
			j /= 10;
		}
		printf("The number is palindrome");
		return true;
	}
}


int main() {
	bool res = isPalindrome(2002);//202 is just an example
	printf(" %d\n", res);
	//int num = 1;
	//printf("The number of digits of num : %d", getDigitLen(num));
	return 0;
}