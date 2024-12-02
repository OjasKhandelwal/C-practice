
#include <stdio.h>
int main() {
    int n;
    printf("n:");
    scanf("%d" , &n);
    int a = 0 , b=1;
    if (n>=1){
        printf("%d \n" , a);
    }
    if (n>=2){
        printf("%d\n" , b);
    }    
        
    for(int i =3 ; i<=n ; i++){
        int next = a+b;
        printf("%d \n" , next);
        a=b;
        b=next;
    }
    printf(" \n");

    return 0;
}