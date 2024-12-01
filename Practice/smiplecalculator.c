
#include <stdio.h>

int main() {
    float a, b;
    char operation;
    printf("a:");
    scanf("%f" , &a);
    printf("operation:");
    scanf("%s" , &operation);
    printf("b:");
    scanf("%f" , &b);
    switch(operation){
        case '+':
        printf("addition: %f" , a+b);
        break;
        case '-':
        printf("subtraction: %f" , a-b);
        break;
        case '/':
        printf("division: %f" , a/b);
        break;
        case '*':
        printf("multiplication: %f" , a*b);
        break;
        default:
        printf("Invalid operation!!!!!!!!");
    
    }
    
    return 0;
}