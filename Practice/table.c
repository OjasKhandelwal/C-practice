
#include <stdio.h>
int main() {
    int num;
    printf("num:");
    scanf("%d" , &num);
    printf("table of %d !!!!!!!\n" , num);
    for(int i =1 ; i<=10; i++){
        int table = num*i;
        
        printf(" %d \n" ,table );
    }
    return 0;
}