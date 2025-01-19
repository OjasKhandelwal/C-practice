#include <stdio.h>

int main() {
    int n = 5 , arr[5] = {32 ,56 ,87 ,54, 67};
    for(int i = 0 ; i< n/2 ; i++){
        int first  = arr[i];
        int second = arr[n-i-1];
        arr[n-i-1] = first;
        arr[i] = second;
    }
    printf("reversed:  ");
    for(int i = 0 ; i <n ; i++){
        printf("%d" , arr[i]);
    }
    printf("\n");
    return 0;
}