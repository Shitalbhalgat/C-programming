#include <stdio.h>

int main() {
    int i, j, k, n = 4;

    // Number square pattern 1
    /*
    123
    123
    123
    */
    printf("Number square pattern 1:\n");
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");

    // Number square pattern 2
    /*
    111
    222
    333
    */
    printf("Number square pattern 2:\n");
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n");

    // Left half pyramid pattern
    printf("Left half pyramid pattern:\n");
    printf("Pattern 1:\n");
    /*
    1
    12
    123
    */
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("Pattern 2:\n");
    /*
    1
    22
    333
    */
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("Pattern 3:\n");
    /*
    1
    23
    456
    78910
    */
    int number = 1;
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", number++);
        }
        printf("\n");
    }
    printf("\n");

    // Right half pyramid pattern
    /*
       1
      22
     333
    4444
    */
    printf("Right half pyramid pattern:\n");
    for(i = 1; i <= n; i++) {
        for(k = 1; k <= (n - i); k++) 
            printf(" ");
        for(j = 1; j <= i; j++) 
            printf("%d", i);
        printf("\n");
    }
    printf("\n");

    // Inverted left half pyramid patterns
    printf("Inverted left half pyramid pattern:\n");
    printf("Pattern 1:\n");
    /*
    123
    12
    1
    */
    for(i = 3; i > 0; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("Pattern 2:\n");
    /*
    333
    22
    1
    */
    for(i = 3; i > 0; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n");

    // Inverted right half pyramid pattern
    /*
    4444
     333
      22
       1
    */
    printf("Inverted right half pyramid pattern:\n");
    printf("Pattern 1:\n");
    for(i = n; i > 0; i--) {
        for(k = 1; k <= (n - i); k++) 
            printf(" ");
        for(j = 1; j <= i; j++) 
            printf("%d", i);
        printf("\n");
    }
    /*
       3
      22
     111
    */

  printf("Pattern 2 : \n");

    for(int i = 3; i>=1; i--) 
    {
        // Print leading spaces
        for(int k = 1; k<=i-1; k++)
            {
                printf(" ");
            }
       for(int j = 3; j>=i; j--)
        {
              printf("%d",i);
        }
        printf("\n");
    }

     /*
    1111
     222
      33
       4
    */
     
    printf("Pattern 3:\n");
    for(i = 1; i<=4; i++)
     {
        for(k =1; k<i; k++) 
        {
            printf(" ");
        
        }
        for(j=4; j>= i; j--) 
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
