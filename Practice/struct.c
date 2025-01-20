
#include <stdio.h>
#include <string.h>
struct date{
        int m;
        int d;
        int y;
};        
    
struct personal{
    float salary;
    char name[100];
    struct date joining;
    };

int main() {
    struct personal s1 , s2;
    s1.salary = 45.87;
    strcpy(s1.name , "ojas");
    s1.joining.m = 5;  
    s1.joining.d = 22; 
    s1.joining.y = 7;  
    printf("%f %s %d/%d/%d \n", s1.salary, s1.name, s1.joining.d, s1.joining.m, s1.joining.y);
    
    printf("name:");
    scanf("%s" , &s2.name);
    
    printf("salary:");
    scanf("%f" , &s2.salary);
    printf("date:");
    scanf("%d" , &s2.joining.d);
    printf("month:");
    scanf("%d" , &s2.joining.m);
    printf("year:");
    scanf("%d" , &s2.joining.y);
    
    printf("%s got salary %f on %d/%d/%d", s2.name , s2.salary , s2.joining.d , s2.joining.m , s2.joining.y);
    
    

    return 0;
}