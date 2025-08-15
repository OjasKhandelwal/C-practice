#include <stdio.h>

void main(){
    int i , j, arr[3][3], sumr=0 , sumc = 0 , sumpd = 0 , r = 0 , c = 0 , sumsd = 0;
    
    printf("enter elements in matrix : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    printf("our matrix:");
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d " , arr[i][j]);
        }
        printf("\n");
    }
    
    //sum of rows
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sumr += arr[i][j];
        
        }
        printf("\n");
        printf("sum of %d row : %d " , i+1 , sumr);
        sumr = 0;
    }
    
    //sum of colmns 
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sumc += arr[j][i];
        
        }
        printf("\n");
        printf("sum of %d column : %d " , i+1 , sumc);
        sumc = 0;
    }
    //sum of parent diagonal elements
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            
            if(i==j){
                sumpd+= arr[i][j];
            }
        }
        
    }
    printf("sum of diagonal elements : %d" , sumpd);
    
    
    //sum of secondary diagonal elements
    /* printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(){
                sumsd+= arr[i][j];
            }
        }
        
    }*/
    printf("sum of diagonal elements : %d" , sumsd);
    
    
    
    //transpose
    printf("\n");
    printf("transpose matrix:");
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d " , arr[j][i]);
        }
        printf("\n");
    }
    


    printf("\n");
    //searching the elements
    int search;
    printf("enter the elements you wanna search :");
    scanf("%d" , &search);
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(search == arr[i][j]){
                r = i+1;
                c = j+1;
                
                
            }
            
        }
        
    }
    printf("index of %d is %d  x %d" , search , r ,c);
    

}