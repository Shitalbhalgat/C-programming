/*
Syntax of Switch case:
switch(expression)
{
  case value1:
      // blocked statements;
      break;
  case value2:
      // blocked statements;
      break;
  ...
  case value n:
      // blocked statements;
      break;
  default:
      // blocked statements;
      break;
}
*/

#include <stdio.h>

int main()
{
    const int x = 10;

    // Example 1: simple switch on integer value
    switch (x)
    {
        case 1:
            printf("%d\n", x);
            break;
        case 2:
            printf("%d\n", x);
            break;
        case 10:
            printf("%d\n", x);
            break;
        case 'x':  // ASCII value of 'x' (120) - no match here
            printf("x\n");
            break;
        default:
            printf("No matching case\n");
            break;
    }

    // Calculator using switch-case
    char c;
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &c);  // note the space before %c to consume any leftover whitespace

    switch (c)
    {
        case '+':
            printf("Addition of two numbers is: %d\n", a + b);
            break;
        case '-':
            printf("Subtraction of two numbers is: %d\n", a - b);
            break;
        case '/':
            if (b != 0)
                printf("Division of two numbers is: %d\n", a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        case '*':
            printf("Multiplication of two numbers is: %d\n", a * b);
            break;
        case '%':
            if (b != 0)
                printf("Modulus of two numbers is: %d\n", a % b);
            else
                printf("Error: Modulus by zero!\n");
            break;
        default:
            printf("Enter a valid operator\n");
            break;
    }

    /*
     Practice programs using switch-case:
     1) Check if character is vowel or consonant
     2) Print day of the week based on number input
     3) Print month name based on number input
    */

    return 0;
}
