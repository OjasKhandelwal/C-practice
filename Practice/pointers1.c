#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;  // Pointer pointing to the first element of the array

    // Accessing array elements using pointer
    printf("First element: %d\n", *ptr);       // Prints: 10
    printf("Second element: %d\n", *(ptr + 1)); // Prints: 20
    printf("Third element: %d\n", *(ptr + 2));  // Prints: 30


    return 0;
}
