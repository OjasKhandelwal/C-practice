#include <stdio.h>
int main() {
    int arr[2][10];
    int a = 2 , b = 3;
    
    for(int i = 0 ; i < 10 ; i++){
        arr[0][i] = a*(i+1);
    }
    printf("Table of 2: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[0][i]);
    }
    printf("\n");
    
    for(int i = 0  ; i< 10 ; i++){
        arr[1][i]  = b*(i+1);
    }
    printf("Table of 3: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[1][i]);
    }
    printf("\n");
      
      return 0;
}
