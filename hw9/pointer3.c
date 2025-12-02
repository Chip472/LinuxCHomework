#include <stdio.h>

int main() {
    	int a, b;
    	int *pA = &a;
    	int *pB = &b;

    	printf("Enter two numbers: ");
    	scanf("%d %d", &a, &b);
			
    	int sum = *pA + *pB;
	printf("Sum using pointers: %d\n", sum);
	
    	return 0;
}

