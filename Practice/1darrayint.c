#include <stdio.h>
int main() {
    
    int sum ,arr[5];
    printf("elements:");
    for(int i = 0 ; i<5 ; i++){
        scanf("%d" , &arr[i]);
    }
    
    printf("Array elements are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
        
    }    
    printf("\n");
    
    for(int i = 0 ; i<5 ; i++){
        sum += arr[i];
    }
    printf("sum of elements: %d \n" , sum);
    
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
    if (arr[i] > max) {
        max = arr[i];
    }
}
    printf("Maximum element: %d\n", max);
    return 0;
}