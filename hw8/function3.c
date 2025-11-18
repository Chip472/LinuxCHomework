#include <stdio.h>

int gcd(int x, int y) {
    	if (x % y == 0)
		return y;
    	return gcd(y, x % y);
}

int main() {
    	int a1 = 48, b1 = 18;
    	int a2 = 56, b2 = 98;

    	printf("GCD of %d and %d is %d\n", a1, b1, gcd(a1, b1));
    	printf("GCD of %d and %d is %d\n", a2, b2, gcd(a2, b2));

    	return 0;
}

