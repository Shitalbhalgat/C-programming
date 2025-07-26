/*
Syntax of while loop in C:

while(condition)
{
    // code to be executed repeatedly while condition is true
}
*/

#include <stdio.h>

int main()
{
    // 1. Print A to Z using while loop
    char ch = 'A';
    printf("Alphabets from A to Z:\n");
    while (ch <= 'Z')
    {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");

    // 2. Count number of digits in a given number
    int n, temp, count = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    temp = n;
     while (temp != 0)
        {
            temp = temp / 10;
            count++;
        }
    printf("Number of digits in %d is: %d\n", n, count);

    // 3. Check for Armstrong number
    /*
        Armstrong number: A number equal to the sum of its own digits each raised to the power of number of digits.
        Example: 153 → 1^3 + 5^3 + 3^3 = 153
    */
    int sum = 0,rem;
    
    printf("\nEnter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        sum += rem * rem * rem; 
        n = n / 10;
    }

    if (sum == temp)
        printf("%d is an Armstrong number.\n", temp);
    else
        printf("%d is NOT an Armstrong number.\n", temp);

    // 4. Check for Palindrome number
    /*
        Palindrome number: A number that reads the same backward as forward.
        Example: 121, 1221, 12321
    */
    int reverse = 0;
   
    printf("\nEnter a number: ");
    scanf("%d", &n);
     temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if (reverse == n)
        printf("%d is a Palindrome number.\n", n);
    else
        printf("%d is NOT a Palindrome number.\n", n);

    return 0;
}

/*
Practice Problems Using While Loop in C:

1) Write a C program to print the 2's multiplication table.
2) Write a C program to print first 20 odd natural numbers and their sum.
3) Write a C program to find sum of first 100 natural numbers.
*/
