//Swapping 2 numbers without third variable
#include <stdio.h>

int main() {
    int x , y;
    
    printf("x:");
    scanf("%d" , &x);
    printf("y:");
    scanf("%d" , &y);
    
    
    printf("Before Swapping: %d %d \n" , x , y);
    
    x = x+y;
    y = x - y;
    x = x - y;
    
    printf("After Swapping: %d %d" , x , y);
    
    return 0;
}