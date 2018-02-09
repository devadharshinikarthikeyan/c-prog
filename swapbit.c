#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf(" value of a=%d b=%d before swapping", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("value of a=%d b=%d after swapping", a, b);

    return 0;
    }
