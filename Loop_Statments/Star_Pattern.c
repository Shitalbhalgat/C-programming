#include <stdio.h>

int main() {
    int i, j, k;
    int n = 4;

    // Star square pattern
    /*
        ***
        ***
        ***
    */
    printf("Star square pattern:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Left half pyramid pattern
    /*
        *
        **
        ***
    */
    printf("Left half pyramid pattern:\n");
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Right half pyramid pattern
    /*
       *
      **
     ***
    ****
    */
    printf("Right half pyramid pattern:\n");
    for(i = 1; i <= n; i++) {
        for(k = 1; k <= (n - i); k++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Inverted left half pyramid
    /*
        ***
        **
        *
    */
    printf("Inverted left half pyramid pattern:\n");
    for(i = 3; i > 0; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Inverted right half pyramid
    /*
        ****
         ***
          **
           *
    */
    printf("Inverted right half pyramid pattern:\n");
    for(i = n; i > 0; i--) {
        for(k = 1; k <= (n - i); k++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Pyramid pattern
    /*
         *
        ***
       *****
      *******
    */
    printf("Pyramid pattern:\n");
    for(i = 1; i <= n; i++) {
        for(k = 0; k < n - i; k++) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Equilateral triangle
    /*
           *
          * *
         * * *
        * * * *
    */
    printf("Equilateral triangle pattern:\n");
    for(i = 1; i <= n; i++) {
        for(k = n - i; k > 0; k--) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // Diamond pattern
    /*
         *
        ***
       *****
      *******
       *****
        ***
         *
    */
    printf("Diamond pattern:\n");
    for(i = 1; i <= n; i++) {
        for(k = 0; k < n - i; k++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for(i = n - 1; i > 0; i--) {
        for(k = 0; k < n - i; k++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
