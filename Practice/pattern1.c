#include <stdio.h>
int main() {
    int x = 0;
     for(int i = 1 ; i<=8 ; i++){ //outer loop - no. of lines
         for(int j = 1 ; j<=i ; j++){ //nested loop - no. of elements in each line
             x+= 1;
             printf("%d  " , x);
         }
         printf("\n");
     }
     return 0;
}