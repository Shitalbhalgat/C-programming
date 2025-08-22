/*Recursive Functions
A recursive function is a function that solves a problem by calling itself on a smaller subproblem.
 It typically consists of two main parts:

Base Case – the condition under which the recursion stops.
Recursive Case – where the function calls itself with modified arguments, gradually approaching the base case.

returntype function(parameters) {
    
    // base case
    if (base condition) {
        return base value;
    }

    // recursive case
    return recursive expression involving function(modified parameters);
}
*/


#include <stdio.h>

int factorial(int n) {
    // Base Case: Factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    // Recursive Case: n * factorial(n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num)); 
    return 0;
}


// Fibonacci Series Using Recursion
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) 
             return 0;       // Base case
    if (n == 1) 
            return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive calls
}

int main() {
    int n = 6;
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

//Sum of Natural Numbers Using Recursion
#include <stdio.h>
int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main()
 {
    int n = 10;
    printf("Sum = %d", sum(n));
    return 0;
}