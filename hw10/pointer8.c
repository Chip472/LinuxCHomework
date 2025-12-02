#include <stdio.h>

struct Student {
    	char name[50];
    	int age;
};

int main() {
    	struct Student s1 = {"Reidoka", 19};
    	struct Student *ptr = &s1;

    	printf("Student Info:\n");
    	printf("Name: %s\n", ptr->name);
    	printf("Age : %d\n", ptr->age);

    	return 0;
}

