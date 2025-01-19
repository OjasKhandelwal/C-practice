#include <stdio.h>
#include <string.h>

struct employee{
    int id;
    char name[100];
    float salary;
};

int main() {
    struct employee s1, s2;
    printf("id:");
    scanf("%d" , &s1.id);
    printf("salary:");
    scanf("%f" , &s1.salary);
    printf("name:");
    scanf("%s" , &s1.name);
    
    printf("id:");
    scanf("%d" , &s2.id);
    printf("salary:");
    scanf("%f" , &s2.salary);
    printf("name:");
    scanf("%s" , &s2.name);
    
    printf("name : %s \n " , s1.name);
    printf("rollno : %d \n" , s1.id);
    printf("cgpa : %f \n" , s1.salary);
    
    printf("name : %s \n " , s2.name);
    printf("rollno : %d \n" , s2.id);
    printf("cgpa : %f \n" , s2.salary);
    
    return 0;
}
