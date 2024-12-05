//Bubble Sort - two adjacent elements are compared , if those 2 elements are in correct order than we move further , else we swap these elements (elements are to be arranged in ascending order)

#include <stdio.h>
int main() {
    int temp , arr[] = {15,16,6,5,8}; //n = 5
    for(int i = 0 ; i<4 ; i++){ //this loop is for passing on to elements
        
        int swapped = 0; //flag to check if element is checked
        
        for(int j =0 ; j<4-i ; j++){//'' '' '' '' comparing the elements
        if(arr[j] > arr[j+1]){
            //swapping 
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            
            swapped = 1; //set to true
        }    
        }
        //if no swapping occured , then array was alreay sorted
        if (!swapped){
            break; //exit the loop early
        }
    }
      printf("Sorted array: ");
      for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
