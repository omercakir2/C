#include <stdio.h>
#define SIZE 26
#define MAX 100

void readFromFile(char* keys, FILE* ptr);
int findIndexOfLetter(char* keys, char ch);
void decipherChar(char* keys, FILE* ptr, char ch);

int main(void) {
    FILE* keysPtr = fopen("key.txt", "r");
    FILE* chp = fopen("ciphered.txt", "r");
    FILE* output = fopen("diciphered.txt", "w");

    char keysArr[SIZE];

    if (keysPtr == NULL || chp == NULL) {
        printf("Error");
    }
    else {
        readFromFile(keysArr, keysPtr);
        char crr;
        while (fscanf(chp, "%c", &crr) != EOF) {
            if (crr >= 'a' && crr <= 'z') {
                decipherChar(keysArr, output, crr);
            }
            else {
                fprintf(output, "%c", crr);
            }
        }
    }
}




void decipherChar(char* keys, FILE* ptr, char ch) {
    int index = findIndexOfLetter(keys, ch);
    fprintf(ptr, "%c", 'a'+index);
}

int findIndexOfLetter(char* keys, char ch) {
    for (int i = 0;i < SIZE;i++) {
        if (keys[i] == ch) return i;
    }
    return -1;//ERROR
}
void readFromFile(char* keys, FILE* ptr) {
    //Gets a FILE pointer opened in Read mode

    for (int i = 0; i < SIZE;i++) {
        fscanf(ptr, "%c", &keys[i]);
    }
}
