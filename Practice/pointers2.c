#include <stdio.h>

int main() {
    int value = 10;
    int *ptr = &value;
    *ptr += 1 ; 
    printf("%d\n", *ptr);  
    printf("%d\n", ptr);  
    printf("%d\n", &ptr);
    printf("%d\n" , value);
    printf("%d\n" , &value);
    return 0;
}
