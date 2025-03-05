#include <stdio.h>
#include <stdlib.h>


// File I/O Manipulation

int main() {
    FILE *file;
    char buffer[100];

    // Open a file for writing
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write to the file
    fprintf(file, "Hello, World!\n"); // fprintf is formating print is similar to printf
    fputs("This is a test file.\n", file); // puts a string in the file
    fclose(file);

    // Open the file for reading
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read from the file
    printf("Reading from the file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);

    // Open the file for appending
    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }

    // Append to the file
    fputs("Appending a new line.\n", file);
    fclose(file);

    // Open the file for reading and writing
    file = fopen("example.txt", "r+");
    if (file == NULL) {
        printf("Error opening file for reading and writing.\n");
        return 1;
    }

    // Read and write to the file
    fseek(file, 0, SEEK_END); // Move to the end of the file
    fputs("Adding another line at the end.\n", file);
    fclose(file);

    // Open the file for binary writing
    file = fopen("example.bin", "wb");
    if (file == NULL) {
        printf("Error opening binary file for writing.\n");
        return 1;
    }

    // Write binary data to the file
    int data[] = {1, 2, 3, 4, 5};
    fwrite(data, sizeof(int), 5, file);
    fclose(file);

    // Open the file for binary reading
    file = fopen("example.bin", "rb");
    if (file == NULL) {
        printf("Error opening binary file for reading.\n");
        return 1;
    }

    // Read binary data from the file
    int readData[5];
    fread(readData, sizeof(int), 5, file);
    printf("Reading binary data from the file:\n");
    for (int i = 0; i < 5; i++) {
        printf("Data %d: %d\n", i, readData[i]);
    }
    fclose(file);

    return 0;
}