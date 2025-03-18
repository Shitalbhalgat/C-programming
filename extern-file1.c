#include<stdio.h> 
void display()
{
    extern int a;
    printf("hello from file1");
    printf("\nvalue of a: %d",a);
}