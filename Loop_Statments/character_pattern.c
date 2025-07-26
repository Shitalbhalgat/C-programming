#include <stdio.h>

int main() {
    int i, j, k, n = 5;
    char ch;

    // Left half pyramid pattern
    /*
    A 
    B B
    C C C
    D D D D
    E E E E E
    */
    ch = 'A';
    printf("Left half pyramid pattern:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
        ch++;
    }

    // Left half pyramid pattern 2 (increasing letters)
    /*
    A
    B C
    D E F
    G H I J
    K L M N O
    */
    ch = 'A';
    printf("\nLeft half pyramid pattern 2:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    // Inverted left half pyramid
    /*
    A A A A A
    B B B B
    C C C
    D D
    E
    */
    ch = 'A';
    printf("\nInverted left half pyramid pattern:\n");
    for (i = 1; i <= n; i++) {
        for (j = i; j <= n; j++) {
            printf("%c ", ch);
        }
        ch++;
        printf("\n");
    }

    // Right half pyramid
    /*
         A
        BB
       CCC
      DDDD
     EEEEE
    */
    ch = 'A';
    printf("\nRight half pyramid pattern:\n");
    for (i = 1; i <= n; i++) {
        for (k = 1; k <= (n - i); k++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%c", ch);
        ch++;
        printf("\n");
    }

    // Inverted right half pyramid
    /*
    AAAAA
     BBBB
      CCC
       DD
        E
    */
    ch = 'A';
    printf("\nInverted Right half pyramid pattern:\n");
    for (i = n; i > 0; i--) {
        for (k = 1; k <= (n - i); k++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%c", ch);
        ch++;
        printf("\n");
    }

    // Pyramid pattern (centered)
    /*
         A
        B B
       C C C
      D D D D
     E E E E E
    */
    ch = 'A';
    printf("\nPyramid pattern:\n");
    for (i = 1; i <= n; i++) {
        for (k = 1; k <= (n - i); k++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%c ", ch);
        ch++;
        printf("\n");
    }

    return 0;
}
