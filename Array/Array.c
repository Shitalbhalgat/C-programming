/*
Array:
        1. An array is a collection of elements of the same data type.
        2. Arrays use zero-based indexing: index starts at 0.
        3. Memory is allocated contiguously for arrays.
        4. You can calculate the number of elements using: 
            sizeof(array) / sizeof(array[0])
        5. Arrays can be statically or dynamically allocated.
       
*/

#include <stdio.h>
int main()
{
    // Array declaration
    int a[2 + 2];                          // Declares an integer array of size 4

    //  Negative sizes are not allowed in C
    // int b[-5]; // Invalid

    //  Empty initialization without size or values is not allowed
    // int a[]; // Invalid

    //  Initialize an array with values
    int b[] = {10, 20, 30};                          // Automatically determines size = 3

    //  All elements initialized to zero
    int c[3] = {0};                                // Equivalent to {0, 0, 0}

    //  Using sizeof operator to define array size
    int c[sizeof(int)];                               // Size depends on sizeof(int), typically 4
    printf("Size of array c: %d bytes\n", sizeof(c));

    //  Accessing out-of-bound index causes undefined behavior
    c[4] = 10;                                     // array[3] is last valid index
    printf("array[4] = %d (Undefined Behavior)\n", c[4]);

    int d[5]={1,2,3,4,5};
    //  Printing elements and their memory addresses
    for (int i = 0;i<=4; i++) 
    {
        printf("Element of array: %d  Address: %p\n", d[i], &d[i]);
    }

    //  Calculating total size in bytes
    printf("Size of 'Array d' in bytes: %d\n", sizeof(d));

    //  Runtime Initialization  
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Variable Length Array 
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    //  Displaying the elements of the array
    printf("Elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    return 0;
}
/*
Practice Exercises:
    1. Write a C program to sort an array in ascending order.
    2. Write a C program to copy elements from one array to another.
    3. Write a C program to find the sum of all elements in an array.
    4. Write a C program to find the maximum and minimum elements in an array.
    5. Write a C program to add two array elements.
    */