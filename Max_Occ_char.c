#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

char getMaxOccurringChar(char *str) {
    // Create an array to store the count of each character
    int count[ASCII_SIZE] = {0};

    // Traverse through the string and count occurrences of each character
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        count[str[i]]++;
    }

    // Find the character with maximum occurrence
    char maxChar;
    int maxCount = 0;
    for (int i = 0; i < ASCII_SIZE; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = (char)i;
        }
    }

    return maxChar;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input string
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    char maxChar = getMaxOccurringChar(str);
    printf("Maximum occurring character is '%c'\n", maxChar);

    return 0;
}
