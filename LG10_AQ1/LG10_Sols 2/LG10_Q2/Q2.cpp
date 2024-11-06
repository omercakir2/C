#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

bool isPrime(int x) {
	if (x == 1) {
		return false;
	}
	bool res = true;
	for (int i = 2; i <= sqrt(x); i++) {
		if (x%i == 0) {
			res = false;
			return false;
		}
	}
	return res;
}

int main(void) {
	int num=0;
	while (num >= 0) {
		do
		{
			printf("Enter a number : ");
			scanf("%d", &num);
		}while (num<0);
		bool res = isPrime(num);
		if (res==true) {
			printf("It's a prime number \n");
		}
		else {
			printf("NOT A PRIME NUMBER \n");
		}

	}
	return 0;
}