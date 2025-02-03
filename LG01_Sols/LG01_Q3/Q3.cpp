#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 50


int fillArr(int *arr, int size) {
	int len = 0,num;
	do
	{
		printf("ENter a number :");
		scanf("%d", &num);
		if (num > 0) {
			*(arr + len) = num;
			len++;
		}
	} while (num>0);
	return len;
}
int isPrime(int num) {
	if (num == 2) return 1;
	else if (num == 1 || num == 0 || num <0) return 0;
	else{
		for (int i = 2; i <= num / 2; i++) {
			if (num%i == 0) {
				return 0;
			}
		}
	}
	return 1;
}
int isPerfect(int num) {
	int sum = 0;
	for (int i = 1; i <= num / 2; i++) {
		if (num%i == 0) {
			sum += i;
		}
	}
	if (sum == num) {
		return 1;
	}
	return 0;
}

void findPrimePerfect(int *arr, int size,int *size_prime,int *size_perfect) {
	for (int i = 0; i < size; i++) {
		if (isPrime(*(arr + i)) == 1) {
			*size_prime += 1;
		}
		if (isPerfect(*(arr + i)) == 1) {
			*size_perfect +=1;
		}
	}
}
int main(void) {
	int arr[MAX], len=0,size_prime=0, size_perfect=0;
	len  = fillArr(arr, MAX);
	findPrimePerfect(arr, len, &size_prime, &size_perfect);
	printf("There are %d prime numbers\n", size_prime);
	printf("There are %d perfect numbers\n", size_perfect);
	return 0;
}