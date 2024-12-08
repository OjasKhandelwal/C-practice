//Addn without +
# include <stdio.h> 
int main() {
    int a , b;
    printf("a:");
    scanf("%d" , &a);
    printf("b:");
    scanf("%d" , &b);
    
    while(b!=0){ //step 2: repeat step 1 'til b becomes zero
    a++ , b--; //step 1
    }
    
    printf("sum of a & b: %d" , a);
    return 0; 
}