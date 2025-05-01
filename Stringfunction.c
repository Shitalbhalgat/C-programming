#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    // 1. strcpy - Copy string
    strcpy(str3, str1);
    printf("strcpy: %s\n", str3);

    // 2. strcat - Concatenate strings
    strcat(str1, str2);
    printf("strcat: %s\n", str1);

    // 3. strlen - Get string length
    printf("strlen: %d\n", strlen(str1));

    // 4. strcmp - Compare strings
    printf("strcmp (str1, str2): %d\n", strcmp(str1, str2));

    // 5. strncmp - Compare first n characters
    printf("strncmp (str1, str2, 3): %d\n", strncmp(str1, str2, 3));

    // 6. strchr - Find first occurrence of a character
    printf("strchr (str1, 'o'): %s\n", strchr(str1, 'o'));

    // 7. strrchr - Find last occurrence of a character
    printf("strrchr (str1, 'o'): %s\n", strrchr(str1, 'o'));

    // 8. strstr - Find substring
    printf("strstr (str1, \"loWo\"): %s\n", strstr(str1, "loWo"));

    // 9. strcpy with strncpy - Copy with limit
    strncpy(str3, str2, 3);
    printf("strncpy: %s\n", str3);

    // 10. memset - Fill with a character
    memset(str3, '*', 5);
    str3[5] = '\0';
    printf("memset: %s\n", str3);

    return 0;
}
