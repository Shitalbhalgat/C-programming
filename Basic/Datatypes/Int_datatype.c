/*

 Int Data Types in C:

 1. short int        → Typically 2 bytes (16 bits)
                      Range: -2^15 to 2^15 - 1  =>  -32,768 to 32,767

 2. int              → Typically 4 bytes (32 bits)
                      Range: -2^31 to 2^31 - 1  =>  -2,147,483,648 to 2,147,483,647

 3. long long int    → Typically 8 bytes (64 bits)
                      Range: -2^63 to 2^63 - 1  =>  -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807



 These types are used to store whole numbers, with varying storage sizes and ranges.


*/

#include <stdio.h>

int main()
{
    // Declaration
    short int a;
    int b;
    long long int c;

    // Size info
    printf("=== Size of Integer Data Types ===\n");
    printf("Size of short int      : %d bytes\n", sizeof(a));
    printf("Size of int            : %d bytes\n", sizeof(b));
    printf("Size of long long int  : %d bytes\n", sizeof(c));

    // Assigning values
    a = 65;
    b = 123456;
    c = 9876543210;

    // Output values
    printf("\n=== Values Stored ===\n");
    printf("Value of a (short int)      : %d\n", a);
    printf("Value of b (int)            : %d\n", b);
    printf("Value of c (long long int)  : %lld\n", c);  // %lld for long long int

    return 0;
}
