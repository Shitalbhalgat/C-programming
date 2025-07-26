#include <stdio.h>
int main()
{
    // Increment Operators:
    // Post-increment (x++): returns the current value, then increments
    // Pre-increment (++x): increments first, then returns the new value
    int x = 10;
    printf("Post increment (x++): %d\n", x++);  // prints 10, then x becomes 11
    printf("Pre Increment (++x): %d\n", ++x);   // x becomes 12, then prints 12

    // Decrement Operators:
    // Post-decrement (y--): returns the current value, then decrements
    // Pre-decrement (--y): decrements first, then returns the new value
    int y = 10;
    printf("Post decrement (y--): %d\n", y--);  // prints 10, then y becomes 9
    printf("Pre decrement (--y): %d\n", --y);   // y becomes 8, then prints 8

    // sizeof operator:
    // Returns the size (in bytes) of the variable or data type
    // The return type of sizeof is size_t, so we use %zu to print it
    int a;
    float b;
    double c;
    char d;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Size of char: %zu byte\n", sizeof(d));

    return 0;
}
