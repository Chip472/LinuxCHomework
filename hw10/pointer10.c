#include <stdio.h>

int* larger(int *a, int *b) {
    	if (*a > *b)
		return a;
    	else
        	return b;
}

int main() {
    	int x, y;
    	printf("Enter two integers: ");
    	scanf("%d %d", &x, &y);

    	int *result = larger(&x, &y);
	
    	printf("Larger number is: %d\n", *result);

    	return 0;
}

