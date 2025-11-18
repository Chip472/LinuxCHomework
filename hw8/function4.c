#include <stdio.h>
#include <stdarg.h>

int sumAll(int count, ...) {
	va_list args;
	va_start(args, count);

	int sum = 0;

	for (int i = 0; i < count; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return sum;
}

int main() {
	int result1 = sumAll(4, 12, 45, 7, 30);
    	int result2 = sumAll(6, 5, 99, 42, 17, 63, 8);

    	printf("Sum of 4 numbers = %d\n", result1);
    	printf("Sum of 6 numbers = %d\n", result2);

    	return 0;
}

