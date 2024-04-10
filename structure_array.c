#include<stdio.h>

// Define a structure named 'stud' to hold student information
struct stud {
    char name[10];
    int age;
    float marks;
};

int main() {
    // Declare an array of struct 'stud' to hold information of 3 students
    struct stud s[3];

    // Prompt user to enter details for each student
    printf("Enter the elements of structure one by one in name, age, marks:\n");

    // Loop to read input for each student
    int i;
    for(i = 0; i < 3; i++) {
        // Read name, age, and marks for each student and store in respective struct fields
        scanf("%s %d %f", s[i].name, &s[i].age, &s[i].marks);
    }

    // Display the information entered for each student
    printf("\nStudent Information:\n");
    for (i = 0; i < 3; i++) {
        // Print name, age, and marks of each student from the array of structs
        printf("Name: %s, Age: %d, Marks: %.2f\n", s[i].name, s[i].age, s[i].marks);
    }

    return 0;
}
