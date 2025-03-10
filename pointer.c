#include <stdio.h>

int main() {
    int num = 5;  // Declare an integer variable
    int *ptr = &num;  // Pointer 'ptr' holds the address of 'num'

    // Print the value of 'num' using the pointer
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n",&num);
    printf("Pointer ptr is storing address: %p\n", ptr);
    printf("Value stored at the address ptr is pointing to: %d\n", *ptr);

    // Modify the value of 'num' through the pointer
    *ptr = 10;  // Dereference the pointer and change the value of num

    // After modifying the value through the pointer
    printf("New value of num: %d\n", num);

    return 0;
}
// #include <stdio.h>
// 
// int main() {
//     int num = 5;
//     int *ptr1;  // A pointer to an integer
//     int **ptr2; // A pointer to a pointer
// 
//     ptr1 = &num;  // ptr1 points to num
//     ptr2 = &ptr1; // ptr2 points to ptr1
// 
//     // Dereferencing ptr2 twice to access the value of num
//     printf("Value of num: %d\n", **ptr2); // Output: 5
//     printf("Address of num: %p\n", *ptr2); // Address of num via ptr2
//     printf("Address of ptr1: %p\n", ptr2); // Address of ptr1 via ptr2
//     printf("Value stored at ptr1: %d\n", *ptr1); // Access value using ptr1
// 
//     return 0;
// }
// 
