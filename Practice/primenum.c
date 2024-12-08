//prime num - it has 2 factors (1 & the number itself)

/* to find whether a num is prime or not , we first calculate the squar-root
of that num. if it is only divisible by itself & 1 then its a prime num*/

# include <stdio.h> 
# include <math.h> 
int main() {
    int n , x;
    int count = 0;
    printf("n:");
    scanf("%d" , &n);
    int sqrtn = ceil(sqrt(n));
    x = n;
    printf("\n");
    for(int i = 2 ; i <=sqrtn ; i++){
        if(x % i ==0)
            count = 1;
    }
     if((count==0 && x!=1) || x==2||x==3){
        printf(" %d is a prime num" , x);
    }else{
        printf("%d is not a prime num" , x);
    }       
    return 0; 
}