#include <stdio.h>
int main()
{
    // printf is a standard library function used to print formatted output to the console (standard output).

    /*
     * printf syntax:
     *   int printf(const char *format, ...);
     *
     * - 'format' is a string that can contain text and format specifiers.
     * - Format specifiers start with '%' and are replaced by the values of additional arguments.
     * - For example, %d for integers, %f for floating-point numbers, %c for characters, %s for strings.
     * - It returns the total number of characters printed (excluding the null byte).
     */

    printf("Hello world");  // prints the text Hello world to the screen

    return 0;
}
