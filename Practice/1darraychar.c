#include <stdio.h>
#include <string.h>
int main() {
    char arr[] = "no such thing as life that's better than yourz";
    printf("length of arr: %d" , strlen(arr));
    printf("\n");
    
    char arr1[] = "-J.Cole";
    strcat(arr , arr1); //appends arr1 to arr
    printf("%s" , arr);
    return 0;
}