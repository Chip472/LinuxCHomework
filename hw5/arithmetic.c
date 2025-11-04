#include <stdio.h>
#include <stdbool.h>

int main() {
	int x = 0;

	printf("Initial x = %d\n", x);
	printf("x++ = %d\n", x++); 
	printf("After x++, x = %d\n", x); 
	x = 0;

	printf("Initial x = %d\n", x);
	printf("++x = %d\n", ++x); 
	printf("After ++x, x = %d\n", x); 
	x = 0;

	printf("Initial x = %d\n", x);
	printf("x-- = %d\n", x--); 
	printf("After x--, x = %d\n", x); 
	x = 0;

	printf("Initial x = %d\n", x); 
	printf("--x = %d\n", --x); 
	printf("After --x, x = %d\n\n", x); 
	x = 0;

	int a = 9, b = 5;

	printf("a -= b: %d\n", a -= b);
	printf("a += b: %d\n", a += b);
	printf("a *= b: %d\n", a *= b);
	printf("a /= b: %d\n", a /= b);
	printf("a %%= b: %d\n", a %= b);
	printf("a &= b: %d\n", a &= b);
	printf("a |= b: %d\n", a |= b);
	printf("a ^= b: %d\n", a ^= b);
	printf("a >>= 1: %d\n", a >>= 1);
	printf("a <<= 2: %d\n\n", a <<= 2);

	bool isLoggedIn = 1;
    	bool isAdmin = 0;

    	printf("Using bool values:\n");
    	printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
    	printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
    	printf("Not logged in: %s\n\n", (!isLoggedIn) ? "true" : "false");

	int A = 1, B = 0, C = 1;

	printf("%d\n", A && B || C);
	printf("%d\n", (A && B) || C);
	printf("%d\n", A || B && C);
	printf("%d\n", (A || B) && C);
	printf("%d\n\n", (!A) && B);

	return 0;
}
