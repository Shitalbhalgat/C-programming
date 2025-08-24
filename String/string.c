/* 
In C, a string is a sequence of characters terminated by a null character ('\0')
Declaration and Initialization:
                    Strings can be declared and initialized in several ways: 
                    Syntax: char variable[array_size];
                    1)Using a string literal: char str[] = "Hello";
                    2)Using individual characters: char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
                    3)Using a character array: char str[6];
                                                str[0] = 'H';
                                                str[1] = 'e'; 
                                                str[2] = 'l'; 
                                                str[3] = 'l'; 
                                                str[4] = 'o'; 
                                                str[5] = '\0';
                                               
*/

#include <stdio.h>
#include <string.h>

int main() 
{
    // create a string using character array
    char ch[10];                          // uninitialized character array
    char ch1[6] = {'a','b','c','d','e','\0'};   // manually null-terminated
    char ch2[] = "hello";                        // implicitly null-terminated
    // char ch3[];                           //  Invalid in C - array size must be known at compile time

    
    printf("String ch, ch1, ch2:\n");
    printf("ch: %s\n", ch);   // Warning: ch is uninitialized
    printf("ch1: %s\n", ch1);
    printf("ch2: %s\n", ch2);

    //Accepting a string using scanf
    printf("Enter a string : ");
    scanf("%s", ch);                 // Accepts string up to whitespace only
    printf("%s\n", ch);

    // Accepting a string using gets
    char str[100];
    printf("Enter a string: ");
    gets(str);  
    printf("You entered: ");
    puts(str);  // Automatically adds newline


    // Accessing characters of string
    printf("First character of str: %c\n",str[0]);

    // Iterating through a string using loop
    printf("Characters in str:\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}
