
# include <stdio.h> 
# include <math.h> 
int main() {
    int n , result ,a =0,b =1;
    printf("n:");
    scanf("%d" , &n);
    printf("fibbonaci series:");
    for(int i =1;i<=n;i++){
        printf(" %d " , a);
        result = a+b;
        a=b;
        b = result;
    }
    return 0; 
}