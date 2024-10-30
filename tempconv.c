#include <stdio.h>

int main() {
    float c ;
    printf("temp in Celcius:");
    scanf("%f", &c);
    
    float f = (9.0/5.0) * c + 32.0;
    printf("temp in Fahrenheit: %f" , f);
    return 0;
}