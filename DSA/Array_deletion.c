#include <stdio.h>

// Function to delete an element at nth position in the array
void deleteElement(int arr[], int *n, int pos) {
    // Check if the position is valid
    if (pos > *n || pos < 1) {
        printf("Invalid position! Please enter position between 1 to %d\n", *n);
    } else {
        // Shift elements to left by one place for deletion
        for (int i = pos - 1; i < *n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        // Decrease array size
        (*n)--;
        printf("Element deleted\n");
    }
}

// Main function
int main() {
    int arr[100], n, pos, i;

    // Input size and elements of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the position where you wish to delete an element
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);
    
    // Delete the element at the specified position
    deleteElement(arr, &n, pos);

    // Print the modified array
    printf("The modified array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}