/*
--------------------------------------------------------------------------------
 INFO: do-while Loop in C

Syntax:
    do {
        // Code block
    } while (condition);

Key Points:
- The body of a do-while loop is always executed **at least once**.
- The condition is checked **after** the body is executed.
- Good for menus, input validation, repeated execution based on user choice.

--------------------------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    // ----------  Ex1: Menu Driven Program Using do-while ----------
    char ch;
    do {
        printf("\n\n******** Menu Driven Program using do-while loop **********\n");
        printf("1) Area of Circle\n");
        printf("2) Area of Triangle\n");
        printf("3) Area of Rectangle\n");
        printf("Q) Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch);  // Space before %c to skip newline

        if (ch == '1') {
            int r;
            printf("Enter radius: ");
            scanf("%d", &r);
            printf("Area of Circle is: %.2f\n", 3.14 * r * r);
        }
        else if (ch == '2') {
            float height, base;
            printf("Enter height and base: ");
            scanf("%f %f", &height, &base);
            printf("Area of Triangle is: %.2f\n", 0.5 * height * base);
        }
        else if (ch == '3') {
            int l, b;
            printf("Enter length and breadth: ");
            scanf("%d %d", &l, &b);
            printf("Area of Rectangle is: %d\n", l * b);
        }
        else if (ch == 'q' || ch == 'Q') {
            printf("Exiting the menu.\n");
        }
        else {
            printf("Invalid input. Try again.\n");
        }

    } while (ch != 'q' && ch != 'Q');

    // ---------- Ex2: Sum Until Negative Number ----------
    int n = 0, sum = 0;
    printf("\n\n******** Sum of Positive Numbers until Negative Entered ********\n");

    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n >= 0)
            sum += n;
    } while (n >= 0);

    printf("Sum of all entered positive numbers is: %d\n", sum);

    // ---------- Ex3: Addition Until User Says No ----------
    int n1, n2;
    char cont;
    printf("\n\n******** Addition of Two Numbers (Continue Until User Says No) ********\n");

    do {
        printf("Enter two numbers: ");
        scanf("%d %d", &n1, &n2);
        printf("Sum = %d\n", n1 + n2);

        printf("Do you want to continue? (Y/y to continue): ");
        scanf(" %c", &cont);
    } while (cont == 'y' || cont == 'Y');

    printf("Exited from addition loop.\n");

    return 0;
}
