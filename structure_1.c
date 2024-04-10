#include<stdio.h>

// Define a structure named 'demo'
struct demo
{
   char name[100]; // Character array to store name
   int roll_no;    // Integer variable to store roll number
   int age;        // Integer variable to store age
};

// Main function
void main() {
   // Initialize structure s1 with specific values
   struct demo s1 = {"Adithyan", 7, 21};
   
   // Print details of the first structure (s1)
   printf("The first structure in order, age, roll, name: %d %d %s", s1.age, s1.roll_no, s1.name);

   // Declare structure s2
   struct demo s2;

   // Prompt user to enter details for the second structure (s2)
   printf("\nEnter the elements of structure in order name, rollno, age:");

   // Read input for 'name' into s2.name using scanf with %s
   scanf("%s", s2.name);

   // Read input for 'roll_no' into s2.roll_no using scanf with %d
   scanf("%d", &s2.roll_no);

   // Read input for 'age' into s2.age using scanf with %d
   scanf("%d", &s2.age);
  
   // Print details of the second structure (s2)
   printf("\nThe second structure in order, age, roll, name: %d %d %s", s2.age, s2.roll_no, s2.name);
}
/*

*/