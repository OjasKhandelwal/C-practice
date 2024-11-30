#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main() {
    int a ;
    float b;
    char c;
    double d;
    
    //sizeof is used to determine size of datatype or variable in bytes
    
    printf("the size of int is %lu \n", sizeof(a));
    printf("the size of float is %lu \n", sizeof(b));
    printf("the size of char is %lu \n",sizeof(c));
    printf("the size of double is %lu \n", sizeof(d));
    
}