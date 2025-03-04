#include <stdio.h>
#include <string.h>

int main() {
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
    
    return 0;
}