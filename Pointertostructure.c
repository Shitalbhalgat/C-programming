#include <stdio.h>

struct A {
    int var;
};

int main() {
    struct A a = {30};
    
    // Creating a pointer to the structure
    struct A *ptr;

    // Assigning the address of person1 to the pointer
    ptr = &a;

    // Accessing structure members using the pointer
    printf("%d", ptr->var);

    return 0;
}


struct Student {
    int roll_no;
    char name[30];
    char branch[40];
   
};

int main() {

    struct Student s1 = {2, "ABC", "CSE"};
  
      // Pointer to s1
    struct Student* ptr = &s1;

      // Accessing using dot operator
    printf("%d\n", ptr->roll_no);
    printf("%s\n", ptr->name);
    printf("%s\n", ptr->branch);

    return 0;
}
