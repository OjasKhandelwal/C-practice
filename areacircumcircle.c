#include <stdio.h>
int main(){
    float r;
    printf("radius:");
    scanf("%f",&r);
    float area = (22/7)*r*r;
    float circumference = 2*(22/7)*r;
    printf("area %f" , area);
    printf("circumference %f" , circumference);
    return 0;
}
