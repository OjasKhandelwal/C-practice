#include <stdio.h>
int main(){
    int x;
    printf("x:"  );
    scanf("%d" , &x);
    if(x%2==0 && x!= 0){
        printf("even");
    }else if (x%2!=0 && x!=0){
        printf("odd");
    }else{
        printf("zero");
    }
    return 0;
}
