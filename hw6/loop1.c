#include <stdio.h>

int main() {
	int num;
    	int sum = 0;

    	printf("Enter positive integers (0 or negative number to stop): ");


	while (1) {
		scanf("%d", &num);
		if (num <= 0) {
            		break;
        	}
        	sum += num;
    	}

    	printf("Sum is: %d\n", sum);
	return 0;
}

