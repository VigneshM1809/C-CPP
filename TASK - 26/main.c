#include <stdio.h>
#include <stdlib.h>

// Define a structure for student records
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;
    FILE *file;

    // Open the file in read mode
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and display the records from the file
    printf("Student Records:\n");
    while (fscanf(file, "%49s %d %f", s.name, &s.age, &s.marks) != EOF) {
        printf("Name: %s, Age: %d, Marks: %.2f\n", s.name, s.age, s.marks);
    }

    // Close the file
    fclose(file);

    return 0;
}
