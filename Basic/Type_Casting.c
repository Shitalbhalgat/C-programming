

/*
 * Type Casting in C:
 * Type casting is the process of converting a variable from one data type to another.
 * There are two main types of type casting:
 * 1) Implicit Type Casting (Automatic type conversion)
 *    - Performed automatically by the compiler when different data types are mixed.
 *    - Example: int to float, char to int.
 * 2) Explicit Type Casting (Manual type conversion)
 *    - Programmer manually converts a variable from one type to another using cast operators.
 *    - Syntax: (datatype) variable
 *    - Example: (float)intVar, (int)floatVar
 */
#include <stdio.h>
int main() {
    // Implicit Type Casting Example
    int num = 20;         
    char ch = 'a';       
    int result = 20 + 'A';  // 'A' = 65 in ASCII

    // Output: Implicit type casting from char to int during addition
    printf("Implicit type casting (char to int) (20 + 'A'): %d\n", result);

    // num = 20, ch = 'a' (ASCII 97), so total = 117, stored in float
    float cal = num + ch;

    // Output: Implicit casting of result (int + char) to float
    printf("Implicit type casting from int and char to float: %f\n", cal);

    // Explicit Type Casting Example
    int a, b;
    float res;

    // Input: values for a and b
    printf("\nEnter two integers for division (a and b): ");
    scanf("%d %d", &a, &b);

    // Output: Show input values
    printf("You entered: a = %d, b = %d\n", a, b);

    // Explicit casting of integer 'a' to float before division
    res = (float)a / b;

    // Output: Result of float division
    printf("Explicit type casting (float)a / b = %f\n", res);

    return 0;
}
