#include <stdio.h>

int main() {
    int value = 10;
int *p = &value;    // p points to value
int **pp = &p;      // pp points to p, which in turn points to value

printf("%d\n", **pp);  // Dereferencing pp twice: First *pp gives p, then **pp gives value (prints 10)

    return 0;
}
