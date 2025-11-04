#include <stdio.h>
#include <stdlib.h>

int main() {
	int secret, guess;
	secret = rand() % 20 + 1; 
	
	printf("Guess the number between 1 and 20:\n");
	
	
	do { 
		printf("Your guess: ");
		scanf("%d", &guess);
	
		if (guess > secret) {
			printf("Lower!\n");
		} else if (guess < secret) { 
			printf("Higher!\n");
		} else {
			printf("Correct!\n");
		}
	} while (guess != secret);
	
	return 0;
}
