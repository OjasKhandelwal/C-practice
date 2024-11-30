//Relational Operators
#include <stdio.h>

int main() {
    int x , y;
    
    printf("x:");
    scanf("%d" , &x);
    printf("y:");
    scanf("%d" , &y);
    
    printf("x==y: %d \n" , x==y);
    printf("x<=y: %d \n" , x<=y);
    printf("x>=y: %d \n" , x>=y);
    printf("x!=y: %d \n" , x!=y);
    printf("x<y: %d \n" , x<y);
    printf("x>y: %d " , x>y);
    
    return 0;
}