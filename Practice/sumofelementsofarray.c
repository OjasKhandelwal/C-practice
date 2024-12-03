#include <stdio.h>

int main() {
    int sum;
    int arr[5] = {43 , 6 , 4 , 47 , 69};
    for(int i = 0 ; i<5 ; i++){
        sum+=arr[i];
    }
    printf("sum of elements of array: %d" , sum);
    return 0;
}
