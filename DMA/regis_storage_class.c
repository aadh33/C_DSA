#include <stdio.h>

void registerStorageDemo() {
    register int x = 10; // 'register' storage class
    printf("Inside registerStorageDemo()\n");
    printf("x = %d\n", x);
    x++; // Modifying the value of x
}

int main() {
    registerStorageDemo(); // Call the function
    // Accessing x outside registerStorageDemo() will not work, as x's scope is limited to the function
    // printf("Outside registerStorageDemo(), x = %d\n", x); // This line will cause an error
    return 0;
}
