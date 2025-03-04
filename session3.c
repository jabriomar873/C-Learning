#include <stdio.h>
#include <string.h>

/* struct manipulation */

struct Age {
    int day;
    int month;
    int year;
};

typedef struct {
    char name[50];
    struct Age age;
    float height;
    float weight;
} Person;

Person CreatePerson1(char name[], int day, int month, int year, float height, float weight) {
    Person person;
    strcpy(person.name, name);
    person.age.day = day;
    person.age.month = month;
    person.age.year = year;
    person.height = height;
    person.weight = weight;
    return person;
}

Person CreatePerson2() {
    Person person;
    printf("Enter the name: ");
    fflush(stdout); // Ensure the prompt is printed before input
    scanf("%s", person.name);
    printf("Enter the day: ");
    fflush(stdout); // Ensure the prompt is printed before input
    scanf("%d", &person.age.day);
    printf("Enter the month: ");
    fflush(stdout); // Ensure the prompt is printed before input
    scanf("%d", &person.age.month);
    printf("Enter the year: ");
    fflush(stdout); // Ensure the prompt is printed before input
    scanf("%d", &person.age.year);
    printf("Enter the height: ");
    fflush(stdout); // Ensure the prompt is printed before input
    scanf("%f", &person.height);
    printf("Enter the weight: ");
    fflush(stdout); // Ensure the prompt is printed before input
    scanf("%f", &person.weight);
    return person;
}

void PrintPerson(Person* person) {
    printf("Name: %s\n", person->name);
    printf("Age: %d/%d/%d\n", person->age.day, person->age.month, person->age.year);
    printf("Height: %.1f\n", person->height);
    printf("Weight: %.1f\n", person->weight);
}

int main() {
    // Declare a table of personnes
    Person tab[3];
    for (int i = 0; i < 3; i++) {
        tab[i] = CreatePerson2();
    }
    // Print the personnes information from the table
    for (int i = 0; i < 3; i++) {
        PrintPerson(&tab[i]);
    }
    return 0;
}