#include <stdio.h>    
#include <string.h>  

/* String manipulation */

int main() {
    char s[100] = "my name is omar jabri";

    printf("%d %d", 'A', 'B'); // if we want to print the ascii value of a character
    printf("\n");

    printf("%c %c", 65, 66); // if we want to print the character of an ascii value
    printf("\n");

    printf("%d %d", s[0], s[1]); // if we want to print the ascii value of a character in a string
    printf("\n");

    printf("%c %c", s[0], s[1]); // if we want to print the character of an ascii value in a string
    printf("\n");

    printf("%s\n", s); // to print the string
    printf("%s\n", s + 11); // to print the string from the 11th character
    printf("%s\n", s + 15); // to print the string from the 15th character

    /* using sprintf */
    char str[100] = "test: ";
    printf("%s we will learn new things in string manipulation\n", "today");
    sprintf(str + 5, "today we will learn new things in string manipulation\n");
    printf("%s\n", str);
    
    /* Additional string manipulation functions */
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[40];

    // strcat - concatenate two strings
    strcat(str1, str2);
    printf("strcat: %s\n", str1);

    // strcpy - copy one string to another
    strcpy(str3, str1);
    printf("strcpy: %s\n", str3);

    // strlen - get the length of a string
    printf("strlen: %lu\n", strlen(str3));

    // strcmp - compare two strings  (0 if equal, <0 if str1 < str2, >0 if str1 > str2)
    printf("strcmp: %d\n", strcmp(str1, str2));

    // strchr - find the first occurrence of a character in a string
    printf("strchr: %s\n", strchr(str3, 'r'));

    // strstr - find the first occurrence of a substring in a string
    printf("strstr: %s\n", strstr(str3, "llo"));

    // memset - fill a block of memory with a particular value
    memset(str3, '*',7);
    str3[7] = '\0'; // null-terminate the string
    printf("memset: %s\n", str3);

    // memcpy - copy a block of memory
    memcpy(str3, str1, strlen(str1)-4);
    printf("memcpy: %s\n", str3);

    /*   puts , gets , fgets, putchar ,getchar */

    
    // puts - prints a string followed by newline
    puts("Testing puts function"); // safer and simpler than printf for strings
    
    // fgets - safely reads a line of input (recommended instead of gets)
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered (using fgets): %s", str);
    
    // Remove newline character from fgets if present
    char str4[100];
    
    // Read input with fgets
    printf("Enter a string: ");
    fgets(str4, sizeof(str4), stdin);
    
    // Before removing newline
    printf("Before: '%s'\n", str4);
    printf("Length Before: %lu\n", strlen(str4));
    // Remove newline using strcspn
    str4[strcspn(str4, "\n")] = 0;
    
    // After removing newline
    printf("After: '%s'\n", str4);
    printf("Length After: %lu\n", strlen(str4));
    // Another example of strcspn
    char text[] = "Hello123World";
    int len = strcspn(text, "23"); // Find first digit
    printf("Length until first digit: %d\n", len); // Will print 5


    char str5[] = "Hello, World! How are you?";
    int pos = strcspn(str5, ",!?"); // Find the first occurrence of any of ',', '!', or '?'
    printf("First delimiter found at position: %d\n", pos); // Will print 5 (position of ',')

    // putchar - prints a single character
    printf("Printing character by character: ");
    for(int i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
    putchar('\n');
    
    // getchar - reads a single character
    printf("Enter a character: ");
    char ch = getchar();
    printf("You entered: %c\n", ch);
    
    /* WARNING: gets is deprecated and dangerous - shown only for learning
       Never use gets in real code - it can cause buffer overflow */
    // char unsafe[10];
    // gets(unsafe); // DON'T USE THIS!

    // strncpy - copy up to n characters from one string to another
    char dest[20];
    strncpy(dest, str1, 5);
    dest[5] = '\0'; // null-terminate the string
    printf("strncpy: %s\n", dest);

    // strncat - concatenate up to n characters from one string to another
    char src[20] = "Hello";
    strncat(src, str2, 3);
    printf("strncat: %s\n", src);

    // strtok - tokenize a string
    char str6[50] = "Hello, World! How are you?";
    char *token = strtok(str6, " ,!?");
    printf("strtok: %s\n", token);
    while (token != NULL) {
        printf("strtok: %s\n", token);
        token = strtok(NULL, " ,!?");
    }

    return 0;
}
