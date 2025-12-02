#include <stdio.h>

void copy(char *dest, char *src) {
    	while (*src != '\0') {
		*dest = *src;
        	dest++;
        	src++;
    	}
    	*dest = '\0';
}

int main() {
    	char src[100];
    	char dest[100];

    	printf("Enter a string: ");
    	fgets(src, sizeof(src), stdin);

    	copy(dest, src);

    	printf("Copied string: %s", dest);

    	return 0;
}

