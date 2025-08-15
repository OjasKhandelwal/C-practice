#include <stdio.h>

#define SMALL_SIZE 20
#define BIG_SIZE 100

int main() {
    int smallArray[SMALL_SIZE];
    int bigArray[BIG_SIZE + 1]; // +1 for insertion space
    int i, j, temp, sizeBig = BIG_SIZE;

    // ---------------------- Question 1 ----------------------
    printf("Enter %d elements for SMALL array:\n", SMALL_SIZE);
    for (i = 0; i < SMALL_SIZE; i++) {
        scanf("%d", &smallArray[i]);
    }

    // Fill BIG array using increment logic starting from 0
    for (i = 0; i < BIG_SIZE; i++) {
        bigArray[i] = i;
    }

    // Display both arrays
    printf("\nSMALL Array:\n");
    for (i = 0; i < SMALL_SIZE; i++) {
        printf("%d ", smallArray[i]);
    }
    printf("\n\nBIG Array:\n");
    for (i = 0; i < BIG_SIZE; i++) {
        printf("%d ", bigArray[i]);
    }
    printf("\n");

    // ---------------------- Question 2 ----------------------
    // Insert 50 at index 50 (position 51 in human terms)
    for (i = sizeBig; i > 50; i--) {
        bigArray[i] = bigArray[i - 1];
    }
    bigArray[50] = 50;
    sizeBig++;

    printf("\nAfter Insertion of 50 at index 50:\n");
    for (i = 0; i < sizeBig; i++) {
        printf("%d ", bigArray[i]);
    }
    printf("\n");

    // Delete element at index 70
    for (i = 70; i < sizeBig - 1; i++) {
        bigArray[i] = bigArray[i + 1];
    }
    sizeBig--;

    printf("\nAfter Deletion at index 70:\n");
    for (i = 0; i < sizeBig; i++) {
        printf("%d ", bigArray[i]);
    }
    printf("\n");

    // ---------------------- Question 3 ----------------------
    int I = 30, K = 20, count = 0;
    printf("\nLinear Search for index I=%d:\n", I);
    if (I < sizeBig) {
        printf("Value at index %d: %d\n", I, bigArray[I]);
    } else {
        printf("Index %d out of range.\n", I);
    }

    printf("\nFrequency count for value K=%d:\n", K);
    printf("Found at indices: ");
    for (i = 0; i < sizeBig; i++) {
        if (bigArray[i] == K) {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0) {
        printf("None");
    }
    printf("\nTotal occurrences of %d: %d\n", K, count);

    // ---------------------- Question 4 ----------------------
    int mid = sizeBig / 2;
    for (i = mid, j = sizeBig - 1; i < j; i++, j--) {
        temp = bigArray[i];
        bigArray[i] = bigArray[j];
        bigArray[j] = temp;
    }

    printf("\nArray after last half reversal:\n");
    for (i = 0; i < sizeBig; i++) {
        printf("%d ", bigArray[i]);
    }
    printf("\n");

    return 0;
}
