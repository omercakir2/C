#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_LENGTH 100

int length_of_str(char *text) {
    int length = 0;
    while (text[length] != '\0') {
        length++;
    }
    return length;
}

char *lower(char *text) {
    int length = length_of_str(text);  // Get length of the original string

    // Dynamically allocate memory for the new string (including the null terminator)
    char *newstring = (char*)malloc((length + 1) * sizeof(char));
    
    if (newstring == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;  // Return NULL if memory allocation fails
    }

    for (int i = 0; i < length; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            newstring[i] = text[i] + 32;  // Convert to lowercase
        } else {
            newstring[i] = text[i];  // Keep the character as is
        }
    }

    newstring[length] = '\0';  // Add null terminator
    return newstring;  // Return the new string
}
char *delete_spaces_from_str(char *text){
    int length = length_of_str(text);
    char *newString = (char*)malloc((length+1)*sizeof(char));
    int x=0;
    if(newString== NULL){
        printf("Memort allocation did not go as we want! \n");
        return NULL;
    }
    for (int i = 0; i < length; i++) {// 48 57
        if ((text[i] >= 'A' && text[i] <= 'Z')||(text[i] >= 'a' && text[i] <= 'z')||(text[i]>=48 && text[i]<=57)){
            newString[x] = text[i];  // Convert to lowercase
            x++;
        }
    }
    newString[x] = '\0';  // Add null terminator
    return newString;  // Return the new string
}
bool isPalindrome(char *s){
    char *lowered_version = lower(s);
    char *only_letters = delete_spaces_from_str(lowered_version);
    int first_pointer,last_pointer,length;
    length = length_of_str(only_letters);
    first_pointer=0 , last_pointer = length-1;
    if(first_pointer == last_pointer){
        return true;
    }
    while (first_pointer<=last_pointer)
    {
        if(only_letters[first_pointer]!=only_letters[last_pointer]){
            printf("%s",only_letters);
            return false;
        }
        first_pointer++;
        last_pointer--;
    }
    return true;
}
char *get_string() {
    static char str[MAX_LENGTH]; // Declare a static array

    printf("Enter a string: ");
    // Use %99s to read the string and prevent buffer overflow
    scanf("%99s", str); // %99s allows up to 99 characters + null terminator
    return str;  // Return the static array
}
int main(void) {
    //char name[] = "A man, a plan, a canal: Panama";// test case
    char *str = getString();
    printf("Palindrome : %d",isPalindrome(str));// Output the result
    // Free the allocated memory
    return 0;
}
