#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

// Insert at beginning
struct Node* insertAtBeginning(struct Node *head, int value) {
    	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    	newNode->data = value;
    	newNode->next = head;
    	return newNode;
}

// Delete a node by value
struct Node* deleteNode(struct Node *head, int value) {
    	struct Node *temp = head;
    	struct Node *prev = NULL;
    	if (temp != NULL && temp->data == value) {
		head = temp->next;
        	free(temp);
        	return head;
    	}

  
    	while (temp != NULL && temp->data != value) {
        	prev = temp;
        	temp = temp->next;
    	}


    	if (temp == NULL) {
        	printf("Value not found in list.\n");
        	return head;
    	}

    	prev->next = temp->next;
    	free(temp);
    	return head;
}

// Print linked list
void printList(struct Node *head) {
    	struct Node *temp = head;
    	printf("List: ");
    	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
    	}
    	printf("NULL\n");
}

int main() {
    	struct Node *head = NULL;

    	head = insertAtBeginning(head, 10);
    	head = insertAtBeginning(head, 20);
    	head = insertAtBeginning(head, 30);

    	printList(head);

    	head = deleteNode(head, 20);
    	printList(head);

    
    	struct Node *temp;
    	while (head != NULL) {
		temp = head;
    	    	head = head->next;
    	    	free(temp);
    	}

    	return 0;
}

