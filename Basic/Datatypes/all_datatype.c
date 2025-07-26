/*
 Data Types in C:

 1. int     – Used for integers (whole numbers), typically 4 bytes
 2. float   – Used for single-precision floating point numbers, 4 bytes
 3. char    – Used to store a single character, 1 byte
 4. double  – Used for double-precision floating point numbers, 8 bytes
*/

#include <stdio.h>

int main()
{
    // Declaration of variables
    int a;
    float b;
    char c;
    double d;

    // Assigning values to variables
    a = 10;        // Integer value
    b = 40.5;     // Float value 
    c = 'a';       // Character value
    d = 3.4;       // Double value

    // Print the values of variables using format specifiers
    printf("=== Variable Values ===\n");
    printf("Value of variable a (int)    = %d\n", a);
    printf("Value of variable b (float)  = %f\n", b);
    printf("Value of variable c (char)   = %c\n", c);
    printf("Value of variable d (double) = %lf\n\n", d);

    // Print size of each data type using sizeof
    printf("=== Data Type Sizes (in bytes) ===\n");
    printf("Size of int    : %lu bytes\n", sizeof(int));
    printf("Size of float  : %lu bytes\n", sizeof(float));
    printf("Size of char   : %lu bytes\n", sizeof(char));
    printf("Size of double : %lu bytes\n", sizeof(double));

    return 0;
}
