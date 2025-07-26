/*
 char Data Type in C:

 - Used to store a single character
 - Size: 1 byte (8 bits)
 - Range:
     - Signed char   → -2^7 to 2^7 - 1 → -128 to 127
     - Unsigned char → 0 to 2^8 - 1    → 0 to 255
 - Also stores characters using their ASCII values
*/

#include <stdio.h>
int main()
{
    // Declaration
    char ch = 'A';               // Character literal
    signed char sch = -100;      // Signed character
    unsigned char uch = 200;     // Unsigned character

    // Size
    printf("=== Size of char Data Types ===\n");
    printf("Size of char          : %d byte\n", sizeof(ch));
    printf("Size of signed char   : %d byte\n", sizeof(sch));
    printf("Size of unsigned char : %d byte\n\n", sizeof(uch));

    // Values
    printf("=== Values Stored in char Variables ===\n");
    printf("ch  = %c (ASCII: %d)\n", ch, ch);
    printf("sch = %d\n", sch);
    printf("uch = %u\n", uch);

    return 0;
}
