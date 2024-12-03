#include <stdio.h>

int main() {
    float temp;
    printf("temp:");
    scanf("%f" , &temp);
    
(temp<0) ? printf("fw"): (0<=temp && temp<10) ? printf("vcw") : (10<=temp && temp<20) ? printf("cw") : printf("nw") ;
   
    return 0;
}