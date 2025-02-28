#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 20

void toUpper(char *str) {
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') {

			str[i] -= 'a' - 'A';
		}
		i++;
	}
}
int main() {
	char words[MAX][MAX],
		temp[MAX];
	int k = 0;
	do
	{
		printf("Enter a word(END to stop): ");
		scanf("%s", temp);

		if (strcmp(temp, "END") != 0) {
			strcpy(words[k], temp);
			k++;
		}
	} while (strcmp(temp, "END") != 0);

	printf("You have entered %d word(s)\n", k);
	for (int j = 0; j < k; j++) {
		toUpper(*(words + j));
		printf("%s ", words+j);
	}

}