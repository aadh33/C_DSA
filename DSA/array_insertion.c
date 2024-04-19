#include <stdio.h>

int main() {
    int n, i, b, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    // Allocate space for n + 1 elements to accommodate the new insertion.
    int a[n + 1];  

    printf("Enter the elements in the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the element to be inserted: ");
    scanf("%d", &b);
    printf("\nEnter the position to insert the element (1 to %d): ", n + 1);
    scanf("%d", &pos);
    
    // Check for a valid position entry.
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position.\n");
        return 1;
    }

    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    
    a[pos - 1] = b; // Insert the new element
    n++; // Increment the number of elements after insertion

    printf("\nThe elements in the array are:");
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }

    return 0;
}