#include <stdio.h>
#include <string.h>

int firstNonRepeatingChar(char* s) {
    int freq[256] = {0};
    int len = strlen(s);

    // Count frequency of each character
    for (int i = 0; i < len; i++) {
        freq[(unsigned char)s[i]]++;
    }

    // Find index of first non-repeating char
    for (int i = 0; i < len; i++) {
        if (freq[(unsigned char)s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int index = firstNonRepeatingChar(str);
    if (index == -1)
        printf("No non-repeating character found.\n");
    else
        printf("First non-repeating character is at index: %d\n", index);

    return 0;
}
