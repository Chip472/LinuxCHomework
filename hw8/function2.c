#include <stdio.h>

int sumArray(int arr[], int size) {
    	if (size == 0)
		return 0;
    	return arr[size - 1] + sumArray(arr, size - 1);
}

int main() {
    	int n;

    	printf("Enter size of array: ");
    	scanf("%d", &n);

    	int arr[n];

    	printf("Enter %d integers:\n", n);
    	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

    	int sum = sumArray(arr, n);

    	printf("Sum of array elements = %d\n", sum);

    	return 0;
}

