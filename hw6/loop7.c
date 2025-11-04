#include <stdio.h>
#include <string.h>

int main() {
    	char password[50];
    	const char correctPassword[] = "meowwwww";

    	do {
		printf("Enter password: ");
        	scanf("%s", password);
		if (strcmp(password, correctPassword) != 0) {
			printf("Incorrect password.\n");
    	    	}

    	} while (strcmp(password, correctPassword) != 0);

    	printf("Access granted!!\n");
	return 0;
}

