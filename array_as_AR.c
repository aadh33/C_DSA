#include<stdio.h>

// Function prototype declaration for avg function
int avg(int [], int);

// Main function
int main(){
    int s[] = {1, 2, 3, 5, 5, 8, 6, 4, 8, 5};  // Declare and initialize an integer array s
    int average, len;  // Declare integer variables average and len

    len = sizeof(s) / sizeof(s[0]);  // Calculate the length of array s

    // Call the avg function with array s and its length as arguments
    average = avg(s, len);

    // Print the calculated average
    printf("The average of the array is: %d", average);

    return 0;  // Return 0 to indicate successful completion of the program
}

// Definition of avg function
int avg(int s[], int a){
    int i, sum = 0, avg;  // Declare integer variables i, sum, and avg

    // Calculate the sum of all elements in the array s
    for(i = 0; i < a; i++){
        sum = sum + s[i];  // Add each element of the array to sum
    }

    // Calculate the average by dividing the sum by the number of elements
    avg = sum / a;

    return avg;  // Return the calculated average back to the caller (main function)
}

/*
Explanation:
Function Prototype (int avg(int [], int);):

This line declares a function prototype for the avg function. The avg function takes an integer array (int []) and an integer (int) as arguments, and returns an integer (int).
Main Function (int main()):

The main function is the starting point of the program. It returns an integer (int) to indicate the status of program execution (usually 0 for successful execution).

int s[] = {1, 2, 3, 5, 5, 8, 6, 4, 8, 5};:

Declares and initializes an integer array s with ten elements.
int average, len;:

Declares integer variables average to store the calculated average and len to store the length of the array s.
len = sizeof(s) / sizeof(s[0]);:

Calculates the length of the array s by dividing the total size of the array (sizeof(s)) by the size of its first element (sizeof(s[0])).
average = avg(s, len);:

Calls the avg function with the array s and its length (len) as arguments.
Assigns the returned average value to the variable average.
printf("The average of the array is: %d", average);:

Displays the calculated average using printf.
return 0;:

Returns 0 from the main function, indicating successful program execution.
Avg Function (int avg(int s[], int a)):

This function calculates the average of elements in the array s.

int i, sum = 0, avg;:

Declares integer variables i (loop counter), sum (to store the sum of array elements), and avg (to store the calculated average).
for(i = 0; i < a; i++){ ... }:

Iterates through each element of the array s using a for loop.
Adds each element to the sum variable.
avg = sum / a;:

Calculates the average by dividing the sum of array elements by the number of elements (a).
return avg;:

Returns the calculated average back to the caller (the main function).
Function Explanation:
Function with Array Parameter:

The avg function takes an integer array (int s[]) and an integer (int a) as parameters.
The array s is passed to the function by reference, allowing the function to access and modify its elements.
Array Length Calculation:

The len variable is calculated using sizeof(s) / sizeof(s[0]) to determine the number of elements in the array s.
Summation and Average Calculation:

The sum variable is used to accumulate the sum of all elements in the array s.
The average is calculated by dividing the sum by the number of elements (a) in the array.
Return Value:

The avg function returns the calculated average back to the caller (the main function), which then prints the result using printf.
In summary, this program demonstrates the use of functions with array parameters 
to calculate the average of elements in an integer array. 
The avg function iterates through the array elements, computes their sum,
 and returns the average back to the main function for display. 
 This example showcases the versatility of functions in C for performing specific tasks 
 on data structures like arrays.
*/