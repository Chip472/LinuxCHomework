#include <stdio.h>

int main() {
    int a = 10;
    char c = 'X';
    double d = 3.14;

    int *pA = &a;
    char *pC = &c;
    double *pD = &d;

    printf("=== Values and Addresses ===\n");

    printf("\nInteger a:\n");
    printf("Value: %d, Address: %p\n", a, (void *)&a);
    printf("Value using pointer: %d, Address using pointer: %p\n", *pA, (void *)pA);

    printf("\nChar c:\n");
    printf("Value: %c, Address: %p\n", c, (void *)&c);
    printf("Value using pointer: %c, Address using pointer: %p\n", *pC, (void *)pC);

    printf("\nDouble d:\n");
    printf("Value: %.2f, Address: %p\n", d, (void *)&d);
    printf("Value using pointer: %.2f, Address using pointer: %p\n", *pD, (void *)pD);

    return 0;
}

