#include <stdio.h>
int main(){
    int x = 5;
    int y = 100;
    
    //swapping x & y by using thrid variable a 
    int a;
     a = x;
     x = y;
     y = a;
     
     printf("x: %d",x);
     printf("y: %d",y);
     
    return 0;
}
