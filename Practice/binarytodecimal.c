#include <stdio.h>
int main() {
    int binary , rem , num , decimal = 0 , base = 1;
    printf("binary number:");
    scanf("%d" , &binary);
    
    num = binary;
    
    while(binary!=0){
        rem = binary%10;
        decimal+= rem*base;
        binary/=10;
        base *= 2;
    }
printf("decimal of equivalent to binary num %d is %d" ,num ,decimal);
    return 0;
}