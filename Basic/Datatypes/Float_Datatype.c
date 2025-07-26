/*
 Float Data Types in C:

 1. float       → 4 bytes (32 bits), 6–7 digits precision
                 Approx range: ±3.4 × 10^±38 (IEEE 754)
                 
 2. double      → 8 bytes (64 bits), ~15 digits precision
                 Approx range: ±1.7 × 10^±308
                 
 3. long double → 10, 12, or 16 bytes depending on compiler
                 Higher precision and range than double
*/

#include <stdio.h>

int main()
{
    // Declaration
    float f = 3.14159f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238L;

    // Sizes
    printf("=== Size of Float Data Types ===\n");
    printf("Size of float       : %d bytes\n", sizeof(f));
    printf("Size of double      : %d bytes\n", sizeof(d));
    printf("Size of long double : %d bytes\n\n", sizeof(ld));

   // Precision
    printf("=== Precision Test ===\n");
    printf("float value       : %f\n", f);       // ~7 digits precision
    printf("double value      : %lf\n", d);     // ~15 digits precision
    printf("long double value : %Lf\n", ld);    // Higher precision

    return 0;
}
