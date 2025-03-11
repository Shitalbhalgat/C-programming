#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is an uppercase letter
    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    } else if (islower(ch)) {
        printf("'%c' is a lowercase letter.\n", ch);
    } else if (isdigit(ch)) {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is neither an uppercase letter, a lowercase letter, nor a digit.\n", ch);
    }

    // Convert the character to uppercase if it is a lowercase letter
    if (islower(ch)) {
        char upperCh = toupper(ch);
        printf("Converted to uppercase: '%c'\n", upperCh);
    }

    // Convert the character to lowercase if it is an uppercase letter
    if (isupper(ch)) {
        char lowerCh = tolower(ch);
        printf("Converted to lowercase: '%c'\n", lowerCh);
    }

    return 0;
}
