#include <stdio.h>

int main() {
    	int n, pos, val, i;
    	int arr[100];

    	printf("Enter number of elements: ");
    	scanf("%d", &n);

    	printf("Enter elements:\n");
    	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);

    	printf("Enter position and value to insert: ");
    	scanf("%d %d", &pos, &val);

    	for(i = n; i > pos; i--)
        	arr[i] = arr[i-1];

    	arr[pos] = val;
    	n++;

    	printf("Array after insertion:\n");
    	for(i = 0; i < n; i++)
        	printf("%d ", arr[i]);

    	return 0;
}

