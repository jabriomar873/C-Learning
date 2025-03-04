#include <stdio.h>
#include <stdlib.h>
#include<string.h>


/* Pointer Manipulation*/


// Function declaration

void printMessage1() {
    printf("Hello, World!\n");
}
void printMessage2(char *name) {
    printf("Hello, %s!\n",name);
}

char* printMessage3(char* name, int age) {
    char* message = (char*)malloc(100 * sizeof(char));
    if (message == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    sprintf(message, "Hello %s, your age is %d years\n", name, age);
    return message;
}
struct Person {
    char name[50];
    int age;
};

int main() {
    // Pointer declaration
    int *ptr;    // Pointer to an integer
    char *cptr;  // Pointer to a character
    float *fptr; // Pointer to a float

    // Pointer initialization
    int a = 10;
    char c = 'A';
    float f = 3.14;

    ptr = &a;
    cptr = &c;
    fptr = &f;

    // Dereferencing pointers
    printf("Value of a: %d\n", *ptr);
    printf("Value of c: %c\n", *cptr);
    printf("Value of f: %.2f\n", *fptr);

    // Pointer arithmetic
    int arr[3]= {1, 2, 3};
    ptr = arr;

    for (int i = 0; i < 3; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    // Pointers to pointers
    int **pptr = &ptr;
    printf("Value of first element in arr: %d\n", **pptr);

    // Dynamic memory allocation
    int *dptr = (int *)malloc(sizeof(int) * 3);
    if (dptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        dptr[i] = i + 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("Dynamic element %d: %d\n", i, dptr[i]);
    }

    free(dptr); // Free the allocated memory

    
    // Function pointers
    void (*funcPtr1)() = &printMessage1;
    (*funcPtr1)();

    void (*funcPtr2)(char *) = &printMessage2;
    (*funcPtr2)("omar");

    char* (*funcPtr3) (char *,int ) = &printMessage3;
    printf("%s",(*funcPtr3)("omar",25));

    // Pointer to a struct
    struct Person person;
    struct Person *personPtr = &person;
    strcpy(person.name, "Omar Jabri");
    person.age = 25;
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);

    // Array of pointers
    int *arrPtr[3];
    arrPtr[0] = &a;
    arrPtr[1] = &arr[1];
    arrPtr[2] = &arr[2];
    for (int i = 0; i < 3; i++) {
        printf("Value of element %d: %d\n", i, *arrPtr[i]);
    }

    // Pointer to an array
    int (*arrayPtr)[3] = &arr;
    for (int i = 0; i < 3; i++) {
        printf("Element %d: %d\n", i, (*arrayPtr)[i]);
    }

    // Void pointers :(also known as a generic pointer) 
    void *vptr;
    vptr = &a;
    printf("Value of a: %d\n", *(int *)vptr); // casting (*int) + dereferencing
    vptr = &f;
    printf("Value of f: %.2f\n", *(float *)vptr);  // casting (float *) + dereferencing

    return 0;
}