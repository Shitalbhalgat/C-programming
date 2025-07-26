// Syntax of if-else statement
/*
    if(condition)
    {
       // code to be executed if condition is true
    }
    else
    {
       // code to be executed if condition is false
    }
*/

#include <stdio.h>

int main()
{
    int x = 10;

    // 1. Simple if-else: if condition true, executes first block, else executes second block
    if (x > 10)
        printf("Value of x is greater than 10\n");
    else
        printf("Value of x is less than or equal to 10\n");

    // 2. Common error: semicolon right after if condition terminates if block prematurely,
    // so else becomes a syntax error. Don't put semicolon after if(condition)
    /*
    if (x > 10);
    {
        printf("\nValue of x is greater than 10\n");
    }
    else
    {
        printf("\nValue of x is less than or equal to 10\n");
    }
    */
    // Above block is commented because it causes compile error.

    // 3. Another pitfall: else with semicolon after it creates an empty else block,
    // so the following braces are treated as independent block (always executed)
    if (x > 10)
    {
        printf("\nValue of x is greater than 10\n");
    }
    else;  // <-- semicolon here ends else block (empty else)
    {
        printf("\nValue of x is less than or equal to 10\n"); // This always runs
    }

    /*
     * Practice Programs:
     * 1) Check if a number is even or odd using if-else
     * 2) Check if a number is a multiple of 7 or not
     * 3) Take length and breadth of a rectangle, check if it is a square (length == breadth)
     * 4) Take two numbers, add them, and:
     *      - If numbers are equal, display triple of sum
     *      - Otherwise, display normal sum
     */

    return 0;
}
