//First version of the code
#include <stdio.h>
#include <string.h>
#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
	char name[MAX_NAME];
	int age;
	//we can more things later
}person;

unsigned int hash(const char *name) {
	int lenght = strlen(name);
	unsigned int hash_value = 0;
	for (int i = 0; i < lenght;i++) {
		hash_value += name[i];
	}
	return hash_value;
}

int main(void) {
	printf("Omer ==> %u \n", hash("Omer"));// we use %u because it's for unsigned integer
	printf("Faruk ==> %u \n", hash("Faruk"));
	printf("Emre ==> %u \n", hash("Emre"));
	printf("Gulcan ==> %u \n", hash("Gulcan"));
	return 0;
}