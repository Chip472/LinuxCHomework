#include <stdio.h>

struct Student {
    	char name[50];
    	int roll;
    	float marks;
};

int main() {
    	int n, i;
    	struct Student s[50];

    	printf("Enter number of students: ");
    	scanf("%d", &n);

    	for(i = 0; i < n; i++) {
		printf("Enter name, roll number, marks:\n");
        	scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    	}

    	printf("\nStudent Details:\n");
    	for(i = 0; i < n; i++) {
        	printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    	}
    	return 0;
}

