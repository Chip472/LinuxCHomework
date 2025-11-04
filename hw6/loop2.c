#include <stdio.h>

int main() {
    	int n;

    	printf("Enter a positive integer: ");
    	scanf("%d", &n);

    	if (n <= 0) {
        	printf("Pls enter a positive integer!\n");
        	return 0;
    	}

    	printf("Multiplication table of %d:\n", n);

    	for (int i = 1; i <= 10; i++) {
        	printf("%d * %d = %d\n", n, i, n * i);
    	}

    	return 0;
}

