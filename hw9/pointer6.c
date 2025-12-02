#include <stdio.h>

int length(char *s) {
    	int len = 0;

    	while (*s != '\0') {
		len++;
        	s++;
    	}

    	return len;
}

int main() {
    	char str[100];

    	printf("Enter a string: ");
    	fgets(str, sizeof(str), stdin);

    	printf("Length: %d\n", length(str));

    	return 0;
}

