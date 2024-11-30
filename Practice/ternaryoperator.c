#include <stdio.h>

int main() {
    int num1, num2, min;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using ternary operator to find the minimum
    min = (num1 < num2) ? num1 : num2;
    //(condition) ? (value_if_true) : (value_if_false)



    // Output the minimum value
    printf("The minimum of %d and %d is: %d\n", num1, num2, min);

    return 0;
}
