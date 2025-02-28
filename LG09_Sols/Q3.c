#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SEN_MAX 100
#define WORD_MAX 15

int findFirstOcc(char *sentence, char*word) {
	int lens = strlen(sentence);
	int lenw = strlen(word);
	for (int i = 0; i <= lens - lenw; i++) {
		if ((strncmp(sentence + i, word, lenw) == 0 ) &&
		(i == 0 && sentence[i + lenw] == ' ') ||
			(sentence[i + lenw] == '\0' && sentence[i - 1] == ' ') ||
			(sentence[i + lenw] == ' ' && sentence[i - 1] == ' '))
			return i;
	}
	return -1;
}
void delAllOcc(char *sentence, char *word) {
	int len_w = strlen(word),
		len_s,
		firstOcc = findFirstOcc(sentence, word);

	char temp[SEN_MAX];
	while (firstOcc != -1) {
		//strcpy(temp, sentence + firstOcc + len_w);
		strcpy(sentence + firstOcc, sentence + firstOcc + len_w);
		firstOcc = findFirstOcc(sentence, word);
	}
}
int main(void) {
	char sentence[SEN_MAX],
		word[WORD_MAX];

	printf("Enter the sentence :");
	scanf("%[^\n]", sentence);

	printf("Enter the word to be deleted :");
	scanf("%s", word);

	delAllOcc(sentence, word);
	printf("Deleted version of it : %s\n", sentence);
	return 0;
}