#include <stdio.h>
#include <ctype.h>

void convertToUpperAndCopy(const char *inputFile, const char *outputFile) {
    FILE *inFile = fopen(inputFile, "r");
    FILE *outFile = fopen(outputFile, "w");

    if (inFile == NULL) {
        printf("Error: Cannot open input file %s\n", inputFile);
        return;
    }

    if (outFile == NULL) {
        printf("Error: Cannot open output file %s\n", outputFile);
        fclose(inFile);
        return;
    }

    char ch;
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    printf("File content has been converted to uppercase and copied successfully!\n");

    fclose(inFile);
    fclose(outFile);
}

int main() {
    char inputFile[100], outputFile[100];
    printf("Enter the name of the input file: ");
    scanf("%s", inputFile);

    printf("Enter the name of the output file: ");
    scanf("%s", outputFile);

    convertToUpperAndCopy(inputFile, outputFile);

    return 0;
}
