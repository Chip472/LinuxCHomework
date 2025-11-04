#include <stdio.h>

int main() {
    	int n, a = 0, b = 1, next, count = 0;

    	printf("Enter the number of terms: ");
    	scanf("%d", &n);

    	if (n <= 0) {
    		printf("Pls enter a positive integer!!\n");
    	    	return 0;
    	}

    	printf("Fibonacci sequence: ");

    	while (count < n) {
		printf("%d ", a);
        	next = a + b;
        	a = b;
        	b = next;
        	count++;
    	}
    	return 0;
}

