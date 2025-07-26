#include <stdio.h>

int main() {
    /*
     * scanf is a standard input function used to read formatted data from the keyboard (standard input).
     *
     * Syntax:
     *   int scanf(const char *format, ...);
     *
     * - 'format' is a string that specifies the type of input expected using format specifiers:
     *    %d - integer
     *    %f - float
     *    %c - single character
     *    %s - string (array of characters)
     *
     * - The additional arguments are pointers to variables where the read input will be stored.
     * - Use '&' to pass the address of the variable, so scanf can modify its value.
     *
     * - scanf returns the number of successfully read inputs.
     */
    // Accepting a int value from user
        int a;
        printf("Address of a : %p",&a);
        printf("\nEnter a value of a = ");
        scanf("%d",&a);
        printf("value of a = %d ",a);

    // Accepting a float value from user
        float f;
        printf("\nEnter a value of f= ");
        scanf("%f",&f);
        printf("value of f = %f ",f);

        // Accepting a character value from user
        char c;
        printf("\nEnter a value of c= ");
        scanf("%c",&c);
        printf("value of c = %c ",c);
return 0;
}
