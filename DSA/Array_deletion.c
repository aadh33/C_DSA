#include <stdio.h> // Include standard input output header

// Function to delete an element at nth position in the array
void deleteElement(int arr[], int *n, int pos) {
    // Check if the specified position is valid
    if (pos > *n || pos < 1) { // If position is out of bounds
        printf("Invalid position! Please enter position between 1 to %d\n", *n); // Print error message
    } else {
        // Loop to shift elements to the left (starting from the position to be deleted)
        for (int i = pos - 1; i < *n - 1; i++) {
            arr[i] = arr[i + 1]; // Shift element
        }
        (*n)--; // Decrement the size of the array
        printf("Element deleted\n"); // Indicate successful deletion
    }
}

// Main function of the program
int main() {
    int arr[100], n, pos, i; // Array declaration and control variables

    // Input number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n); // Read number of elements
    
    // Input the elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read each element into the array
    }
    
    // Input the position where you wish to delete an element
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos); // Read the position to be deleted
    
    // Call the deleteElement function to perform deletion
    deleteElement(arr, &n, pos);

    // Print the modified array
    printf("The modified array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each element of the modified array
    }
    printf("\n");

    return 0; // Return 0 to indicate successful execution
}