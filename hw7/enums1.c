#include <stdio.h>

enum week { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() {
    	int d;
    	printf("Enter a number (1-7): ");
    	scanf("%d", &d);

    	if(d >= Monday && d <= Sunday) {
		printf("Day: ");
        	switch(d) {
			case Monday: printf("Monday"); break;
            		case Tuesday: printf("Tuesday"); break;
            		case Wednesday: printf("Wednesday"); break;
            		case Thursday: printf("Thursday"); break;
            		case Friday: printf("Friday"); break;
            		case Saturday: printf("Saturday"); break;
            	case Sunday: printf("Sunday"); break;
        	}
    	}
	else
	{
        	printf("Invalid input");
    	}
    	return 0;
}

