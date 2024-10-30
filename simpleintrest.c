#include <stdio.h>
int main(){
    float p , r ,t ;
    printf("principal:");
    scanf("%f" , &p);
    printf("rate:");
    scanf("%f" , &r);
    printf("time:");
    scanf("%f" , &t);
    int si = (p*r*t)/100;
    printf("simple intrest: %d" , si);
    return 0;
}
