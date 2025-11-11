#include <stdio.h>

enum error_code { SUCCESS, FILE_NOT_FOUND, PERMISSION_DENIED };

enum error_code simulate() {
    	int x;
    	printf("Enter 0=SUCCESS, 1=FILE_NOT_FOUND, 2=PERMISSION_DENIED: ");
    	scanf("%d", &x);
    	if(x == 0) return SUCCESS;
    	if(x == 1) return FILE_NOT_FOUND;
    	return PERMISSION_DENIED;
}

int main() {
    	enum error_code result = simulate();
    	printf("Error code returned: %d\n", result);
    	return 0;
}

