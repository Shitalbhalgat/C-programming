/*
--------------------------------------------------------------------------------
INFO: break and continue in C
 break:
    - Exits the nearest enclosing loop (for, while, do-while) or switch.
    - Used to stop execution when a certain condition is met.

continue:
    - Skips the current iteration of the loop and moves to the next.
    - Useful for skipping specific values or conditions inside a loop.

--------------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

    // -------------------- Example of break --------------------
    printf("Using break statement:\n");
    printf("Print numbers from 1 to 10 but stop when number is 5:\n");

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Loop breaks when i == 5
        }
        printf("%d ", i);
    }

    printf("\n");

    // --------------------  Example of continue --------------------
    printf("\nUsing continue statement:\n");
    printf("Print numbers from 1 to 10 but skip number 5:\n");

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip printing when i == 5
        }
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
