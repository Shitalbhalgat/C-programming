#include <stdio.h>

int main() {
    char str[] = "Hello, World!";  // Declare a string (array of characters)
    char *ptr = str;  // Pointer to the string (points to the first character of the array)

    // Printing the string using the pointer
    printf("String using pointer: %s\n", ptr); 
    // Accessing individual characters of the string using pointer arithmetic
    printf("First character: %c\n", *ptr);   // Prints 'H'
    printf("Second character: %c\n", *(ptr + 1));  // Prints 'e'
    
    // Using pointer arithmetic to traverse the string
    for (int i = 0; *(ptr + i) != '\0'; i++) {
        printf("Character at position %d: %c\n", i, *(ptr + i));  // Prints each character of the string
    }

    return 0;
}
