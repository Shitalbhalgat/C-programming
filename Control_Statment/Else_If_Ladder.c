// Syntax of else-if ladder
/*
    if(condition)
    {
       // code to be executed if condition is true
    }
    else if(condition)
    {
       // code to be executed if previous condition is false and this condition is true
    }
    else
    {
       // code to be executed if all above conditions are false
    }
*/

#include <stdio.h>

int main()
{
    // C program to check if entered character is alphabet, digit, or special character
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // note the space before %c to consume any leftover whitespace

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("You entered an alphabet\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("You entered a digit\n");
    }
    else
    {
        printf("You entered a special character\n");
    }


    //leap year
        int a;
    printf("Enter a year :");
    scanf("%d",&a);
    if((a%400==0)||((a%4==0 && a%100!=0)))
    {
        printf("It is a leap year");
    }
    else
    printf("It is not a leap year");
    /*
    Practice programs on else-if ladder:
    1) Find the largest among three numbers
    2) Check if a year is a leap year (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
    3) Grade program:
        below 35 - F
        35-50 - E
        50-60 - D
        60-70 - C
        70-80 - B
        80-90 - A
        90-100 - A+
    4) Check if number is divisible by both 3 & 5, or by only one of them
    */

    return 0;
}
