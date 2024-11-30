#include <stdio.h>
void main() {
    float dist;
    printf("distance b/w c1 & c2 in kilometers: " );
    scanf("%f" , &dist );
    printf("distance in meter: %f m \n" , dist*1000);
    printf("distance in cm: %f cm \n" , dist*100000);
    printf("distance in feet: %f f \n" , dist*3280.84);
    printf("distance in inches: %f inches \n" , dist*39370.1);
}

