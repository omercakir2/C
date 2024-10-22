#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
	int n = 0;
	double x = 0,res=0;
	do
	{
		printf("Enter a value for n:");
		scanf("%d", &n);
	} while (n<=0);
	printf("Enter x value : ");
	scanf("%lf", &x);
	int sign = -1;
	res = x;
	for (int i = 1; i <= n; i++) {
		res = res + sign * pow(x, 2*i + 1)/(2*i);
		sign *= -1;
	}
	printf("The result is : %.2f", res);
	
}