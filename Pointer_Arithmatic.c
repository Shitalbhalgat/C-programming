#include <stdio.h>

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};  
//     int *ptr = arr;  // Pointer pointing to the first element of the array
// 
//     printf("Initial value pointed by ptr: %d\n", *ptr);  // Should print 10
// 
//     // Pointer increment (ptr++ moves to the next element)
//     ptr++;  
//     printf("Value after ptr++: %d\n", *ptr);  // Should print 20
// 
//     // Pointer addition (ptr + 2 moves the pointer two elements forward)
//     ptr = ptr + 2;
//     printf("Value after ptr + 2: %d\n", *ptr);  // Should print 40
// 
//     // Pointer subtraction (ptr - 1 moves one element back)
//     ptr--;
//     printf("Value after ptr--: %d\n", *ptr);  // Should print 30
// 
//     // Pointer difference (ptr1 - ptr2 gives number of elements between two pointers)
//     int *ptr1 = arr;
//     int *ptr2 = ptr;
//     printf("Difference between ptr1 and ptr2: %ld\n", ptr2 - ptr1);  // Should print 2 (as ptr2 is 2 elements ahead of ptr1)
// 
//     return 0;
//  }

// 
int main() {
    int arr[3] = {1, 2, 3};   
    int (*ptr)[3] = &arr;     // Pointer to the array of 3 integers

    printf("Array values using pointer to array:\n");

    // Dereferencing pointer to access the whole array
    for (int i = 0; i < 3; i++) {
        printf(" %d ", (*ptr)[i]);  // Dereference ptr and access array elements
        printf("  %p",&ptr[i]);
    }
    printf("\n");

    // Alternatively, we can use pointer arithmetic on ptr
    printf("Array values using pointer arithmetic:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", *(*ptr + i));  // Accessing array elements using pointer arithmetic
    }
    printf("\n");

    return 0;
}
