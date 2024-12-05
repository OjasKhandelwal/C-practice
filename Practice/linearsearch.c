#include <stdio.h>
int main() {
    int arr[] = {15,5,20,35,2,42,69,82};
    for(int i = 0; i<8 ;i++){
        if(arr[i] == 42){
            printf("42 is at index %d" , i);
            break;
        }
        if(i==7){
            printf("element not found");
        }
    }
    return 0;
}


//Time Complexity
//best case : o(0) => means we got the element in order of 0 index only (first case). 
//worst case : o(n) => means we got the element in order of n index(last case). 
//average case : sum of all the case / no. of cases => (n+1)/2