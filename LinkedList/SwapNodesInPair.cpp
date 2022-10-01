#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void pairWiseSwap(Node* head){
	Node* temp = head;

	/* Traverse further only if
	there are at-least two nodes left */
	while (temp != NULL && temp->next != NULL) {
		swap(temp->data,
			temp->next->data);
		temp = temp->next->next; //swap and move ahead
	}
}

void push(Node** head_ref, int new_data){
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point
	to the new node */
	(*head_ref) = new_node;
}

void printList(Node* node){
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

int main(){
	Node* start = NULL;
    
	push(&start, 5);
	push(&start, 4);
	push(&start, 3);
	push(&start, 2);
	push(&start, 1);

	cout << "Linked list before" << endl;
	printList(start);

	pairWiseSwap(start);

	cout << "\nLinked list after" << endl;
	printList(start);

	return 0;
}
