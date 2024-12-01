
#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("n:");
    scanf("%d" , &n);
    printf("sum:");
    for(int i =1 ; i<=n; i++){
        if(i%2!=0){
            sum += i;
        }
    }
    printf("sum of odd numbers till %d : %d" , n , sum);
    return 0;
}