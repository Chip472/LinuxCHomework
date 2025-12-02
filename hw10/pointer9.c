#include <stdio.h>
#include <stdlib.h>

int main() {
    	int n;
    	printf("Enter number of elements: ");
    	scanf("%d", &n);

    	int *arr = (int *)malloc(n * sizeof(int));

    	if (arr == NULL) {
		printf("Memory allocation failed!\n");
        	return 1;
    	}

    	printf("Enter %d integers:\n", n);
    	for (int i = 0; i < n; i++) {
        	scanf("%d", &arr[i]);
    	}

    	int *largest = arr;

    	for (int i = 1; i < n; i++) {
        	if (*(arr + i) > *largest) {
			largest = arr + i;
        	}
    	}

    	printf("Largest element: %d\n", *largest);

    	free(arr);
    	return 0;
}

