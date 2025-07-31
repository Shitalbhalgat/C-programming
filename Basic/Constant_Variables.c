/*
 * Constant variables in C can be created in two ways:
 * 
 * 1) Using #define macro
 *    - This is a preprocessor directive that replaces occurrences of the macro with its value before compilation.
 *    - Syntax: #define CONSTANT_NAME value
 *    - Example: #define PI 3.14
 *    - It does not have a data type and has no scope.
 * 
 * 2) Using const keyword
 *    - This creates a typed constant variable that cannot be modified after initialization.
 *    - Syntax: const datatype variable_name = value;
 *    - Example: const float pi = 3.14;
 *    - It has type safety and scope.
 * 
*/

// Program to find area of circle using constant values

#include <stdio.h>

#define PI 3.14   // Macro constant for PI

int main() {
    const float pi = 3.14;  // Constant variable using const keyword
    float r = 10.0;         

    // Calculate and print area using #define macro
    printf("Area of circle (using #define macro): %f\n", PI * r * r);

    // Calculate and print area using const keyword
    printf("Area of circle (using const keyword): %f\n", pi * r * r);

    return 0;
}
