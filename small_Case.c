#include <stdio.h>

int main() {
    char ch;

    // Read a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a lowercase alphabet using conditional operator
    int isLowercaseAlphabet = (ch >= 'a' && ch <= 'z') ? 1 : 0;

    // Check if the character is a special symbol using conditional operator
    int isSpecialSymbol = ((ch >= 0 && ch <= 47) || 
                          (ch >= 58 && ch <= 64) ||
                          (ch >= 91 && ch <= 96) ||
                          (ch >= 123 && ch <= 127)) ? 1 : 0;

    // Display the results
    printf("Character: %c\n", ch);

    if (isLowercaseAlphabet) {
        printf("The character is a lowercase alphabet.\n");
    } else {
        printf("The character is not a lowercase alphabet.\n");
    }

    if (isSpecialSymbol) {
        printf("The character is a special symbol.\n");
    } else {
        printf("The character is not a special symbol.\n");
    }

    return 0;
}
