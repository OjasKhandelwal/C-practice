

#include <stdio.h>

int factorial(int a);

int main() {
    int res = factorial(5);
    printf("res: %d" , res);
}

int factorial(int a){
    if(a==0){
        return 1;
    }
    return a*factorial(a-1);
}