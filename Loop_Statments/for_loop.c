/*
Syntax of for loop in C:

for(initialization; condition; increment/decrement)
{
    // Code to execute in each iteration
}
*/

#include <stdio.h>

int main()
{
    short int i = 0, j, n;
    float sum = 0;

    // 1. Print first 10 numbers
    printf("First 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    // 2. Print sum of first 100 natural numbers
    sum = 0;  // Reset sum before reuse
    for (i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first 100 natural numbers is: %.0f\n", sum);

    // 3. Use two variables in for loop
    printf("\nUsing two loop variables (i and j):\n");
    for (i = 1, j = 0; i <= 5 && j < 3; i++, j++)
    {
        printf("i = %d, j = %d\n", i, j);
    }

    // 4. Calculate the value of the series: 1 + 1/2 + 1/3 + ... + 1/n
    sum = 0;  // Reset sum again
    printf("\nEnter a value of n to calculate the  series: ");
    scanf("%hd", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (1.0f / i);  // Ensure float division
    }
    printf("Sum of the series is: %f\n", sum);

    return 0;
}

/*
 Practice Problems (Write these using for loop in C):

1) Check if a number is prime or not
2) Print Fibonacci series up to n terms
3) Print multiplication table in the format: 2 * 1 = 2 ... 2 * 10 = 20
*/
