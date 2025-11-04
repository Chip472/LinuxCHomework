#include <stdio.h>

int main() {
	int choice;
	double balance = 1000.0, amount;

    	printf("Welcome to the ATM! What would you like to do today?\n");

    	do {
		printf("\n1. Check balance\n");
        	printf("2. Deposit\n");
        	printf("3. Withdraw\n");
        	printf("4. Exit\n");
        	printf("Enter your choice: ");
        
        	if (scanf("%d", &choice) != 1) {
			printf("That's not even a number...\n"); 
            		while (getchar() != '\n'); 
            		continue;
		}

		switch (choice) {
			case 1:
				printf("Your balance is $%.2f, unfortunately.\n", balance);
                		break;

            		case 2:
                		printf("Enter deposit amount: ");
                		scanf("%lf", &amount);
                		if (amount > 0) {
					balance += amount;
                    			printf("Deposit successful. Your balance is now $%.2f, you're rich!!\n", balance); 
                		} else {
                    			printf("Haha very funny.\n");
                		}
                		break;

            		case 3:
                		printf("Enter withdrawal amount: ");
                		scanf("%lf", &amount);
                		if (amount > 0 && amount <= balance) {
                    			balance -= amount;
                    			printf("Withdrawal successful. Your new balance is $%.2f, you're poor!!\n", balance); 
                		} else if (amount > balance) {
                    			printf("You don't have that much money bro.\n");
                		} else {
                    			printf("Haha very funny.\n");
                		}
                		break;

            		case 4:
                		printf("Thank you for using the ATM!\n");
                		break;

            		default:
                		printf("Can you see we don't have that option? Please try again.\n");
		}
	} while (choice != 4);

	return 0;
}

