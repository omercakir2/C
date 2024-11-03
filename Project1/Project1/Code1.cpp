#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
	srand(time(NULL));
	//int num = rand() % 1100 + 1;
	int num = 153;
	printf("The number generatered is  : %d \n", num);

	int res = 0;
	for (int i = 10; i <= num*10; i *= 10) {

		int digit = num % i / (i / 10);//printf("The digit is : %d\n", digit);
		res += pow(digit, 3);//printf("The res is : %d\n", res);	
	}
	if (res == num) {
		printf(" %d is a narcistic number \n",num);
	}
	else {
		printf(" %d is NOT a narcistic number \n", num);
	}

	return 0;
}