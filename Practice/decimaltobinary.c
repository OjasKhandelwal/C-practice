#include <stdio.h>

int main() {
    int num;

    //
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) { // If the number is 0, print binary as 0
        printf("Binary equivalent: 0\n");
        return 0;
    }


    printf("Binary equivalent: ");
    for (int i = 31; i >= 0; i--) { //a loop to iterate through all 32 bits of an integer

        int bit = (num >> i) & 1;// extracts the i-th bit of the number using right shift(>>) & bitwise AND(&)
        
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}
