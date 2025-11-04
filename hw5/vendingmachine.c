#include <stdio.h>

int main() {
    	int choice;

    	printf("🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟\n");
	printf("   ✨  VENDING MACHINE MENU  ✨\n");
	printf("🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟\n");

	printf("1. Soda  - $1.50\n");
    	printf("2. Water - $1.00\n");
    	printf("3. Chips - $2.00\n");
    	printf("4. Candy - $1.25\n");
    	printf("Please enter your selection (1-4): ");
    	scanf("%d", &choice);

    	switch (choice) {
		case 1:
			printf("You selected Soda. Cost: $1.50\n");
            		break;
        	case 2:
            		printf("You selected Water. Cost: $1.00\n");
            		break;
        	case 3:
            		printf("You selected Chips. Cost: $2.00\n");
            		break;
        	case 4:
            		printf("You selected Candy. Cost: $1.25\n");
            		break;
        	default:
            		printf("Invalid selection.\n");
            		break;
    	}

	return 0;
}

