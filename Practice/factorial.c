
#include <stdio.h>
int main() {
    int n;
    int fac =1;
    printf("n:");
    scanf("%d" , &n);
    for(int i =1 ; i<=n; i++){
        fac*=i;
    }
    printf("factorial of %d : %d" , n , fac);
    return 0;
}