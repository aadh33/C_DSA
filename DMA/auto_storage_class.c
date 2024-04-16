#include <stdio.h>

void autoStorageDemo() {
    auto int x = 10; // 'auto' storage class (optional)
    printf("Inside autoStorageDemo()\n");
    printf("x = %d\n", x);
    x++; // Modifying the value of x
}

int main() {
    autoStorageDemo(); // Call the function
    // Accessing x outside autoStorageDemo() will result in an error since x's scope is limited to the function
    // printf("Outside autoStorageDemo(), x = %d\n", x); // This line will cause an error
    return 0;
}
