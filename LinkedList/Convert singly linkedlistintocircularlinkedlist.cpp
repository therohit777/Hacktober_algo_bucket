
#include <bits/stdc++.h>


struct Node {
	int data;
	struct Node* next;
};


struct Node* circular(struct Node* head)
{
	
	struct Node* start = head;


	while (head->next != NULL)
		head = head->next;
		
	
	head->next = start;
	return start;
}

void push(struct Node** head, int data)
{
	
	struct Node* newNode = (struct Node*)malloc
						(sizeof(struct Node));


	newNode->data = data;

	
	newNode->next = (*head);


	(*head) = newNode;
}


void displayList(struct Node* node)
{
	struct Node* start = node;

	while (node->next != start) {
		printf("%d ", node->data);
		node = node->next;
	}
	
.
	printf("%d ", node->data);
}


int main()
{

	struct Node* head = NULL;


	push(&head, 15);
	push(&head, 14);
	push(&head, 13);
	push(&head, 22);
	push(&head, 17);


	circular(head);

	printf("Display list: \n");
	displayList(head);

	return 0;
}
