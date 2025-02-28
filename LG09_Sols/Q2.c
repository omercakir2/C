#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SEN_MAX 100
#define WORD_MAX 15
int findAllOcc(char *arr, char *word, int* return_arr) {
	int i, j = 0,
		len_arr = strlen(arr),
		len_word = strlen(word);
	for (i = 0; i <=  len_arr-len_word ; i++) {
		if (strncmp(arr + i, word, len_word) == 0) {
			return_arr[j] = i;
			j++;
		}
	}
	return_arr[j] = -1;
	return j;

}
int main() {
	char sentence[SEN_MAX],
		word[WORD_MAX];
	printf("Enter a sentence :");
	scanf("%[^\n]", sentence);

	printf("Enter a word:");
	scanf("%s", word);

	int arr[15],len;
	len = findAllOcc(sentence, word, arr);
	printf("All occurences are on indexes : \n");
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;

}
