#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are: ", n);

    for (int i = 2; i <= n; i++) // Loop over numbers from 2 to n
    {
        int c = 0; // Reset divisor count for each number

        for (int j = 1; j <= i; j++) // Check divisors of i
        {
            if (i % j == 0) // If i is divisible by j
            {
                c += 1; // Increment divisor count
            }
        }

        if (c == 2) // Prime numbers have exactly 2 divisors
        {
            printf("%d ", i); // Print the prime number
        }
    }

    printf("\n"); // Add a newline for better formatting
    return 0;
}