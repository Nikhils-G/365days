#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if two strings are anagrams
bool areAnagrams(char str1[], char str2[]) {
    int count[256] = {0};  // Array to count occurrences of characters
    int i;

    // Check if lengths of both strings are equal
    if (strlen(str1) != strlen(str2)) {
        return false;  // Not anagrams if lengths are not equal
    }

    // Increment count for characters in str1 and decrement for characters in str2
    for (i = 0; str1[i] && str2[i]; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    // Check if all counts are zero
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;  // Not anagrams if any count is non-zero
        }
    }

    return true;  // Strings are anagrams
}

int main() {
    char str1[100]={"Nikhil"};
    char str2[100]={"prep"};
    int n=strlen(str1);
    int m=strlen(str2);
    
  

    // Check if the strings are anagrams
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
