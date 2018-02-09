#include <stdio.h>
int main() {
    int a = 70;
    int b = 80;
    printf(" value of i=%d k=%d before swapping", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("value of a=%d b=%d after swapping", a, b);

    return 0;
    }
