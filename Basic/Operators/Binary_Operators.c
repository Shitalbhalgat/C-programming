#include <stdio.h> 

int main()
{
    // Arithmetic Operators
    int x = 10, y = 3;
    printf("Arithmetic Operators:\n");
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("x %% y = %d\n\n", x % y);  // Use %% to print %

    // Assignment Operators
    int z = 5;
    printf("Assignment Operators:\n");
    z += 3;
    printf("z += 3 -> z = %d\n", z);
    z -= 2;
    printf("z -= 2 -> z = %d\n", z);
    z *= 2;
    printf("z *= 2 -> z = %d\n", z);
    z /= 3;
    printf("z /= 3 -> z = %d\n", z);
    z %= 2;
    printf("z %%= 2 -> z = %d\n\n", z);

    // Relational or Comparison Operators
    printf("Relational (Comparison) Operators:\n");
    printf("x == y is %d\n", x == y);
    printf("x != y is %d\n", x != y);
    printf("x > y is %d\n", x > y);
    printf("x < y is %d\n", x < y);
    printf("x >= y is %d\n", x >= y);
    printf("x <= y is %d\n\n", x <= y);

    // Logical Operators
    int a = 5, b = 5, c = 10, result;
    printf("Logical Operators:\n");

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d\n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d\n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d\n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d\n", result);

    result = !(a != b);
    printf("!(a != b) is %d\n", result);

    result = !(a == b);
    printf("!(a == b) is %d\n\n", result);

    // Bitwise Operators
    int p = 6, q = 3;
    printf("Bitwise Operators:\n");
    printf("p & q = %d\n", p & q);  // Bitwise AND
    printf("p | q = %d\n", p | q);  // Bitwise OR
    printf("p ^ q = %d\n", p ^ q);  // Bitwise XOR
    printf("~p = %d\n", ~p);        // Bitwise NOT
    printf("p << 1 = %d\n", p << 1); // Left shift
    printf("p >> 1 = %d\n", p >> 1); // Right shift

    return 0;
}
