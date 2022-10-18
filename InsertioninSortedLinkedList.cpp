/* Program to Insert in a sorted list */
#include <iostream>
using namespace std;

/* Node */
class Node {
public:
	int data;
	Node* next;
};

/* Function to insert in a sorted linked list*/
void sortedInsert(Node** head_ref, Node* new_node)
{
	Node* current;
	if (*head_ref == NULL
		|| (*head_ref)->data
			>= new_node->data) {
		new_node->next = *head_ref;
		*head_ref = new_node;
	}
	else {
		current = *head_ref;
		while (current->next != NULL && current->next->data < new_node->data) {
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
}

/* Function to create a new node */
Node* newNode(int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = NULL;
	return new_node;
}

/* Function to print linked list */
void printList(Node* head)
{
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

/* Driver Program*/
int main()
{
	Node* head = NULL;
    char c = 'y';
    int n;
    do{
        cout<<"\nEnter value of new node : ";
        cin>>n;
	    Node* new_node = newNode(n);
	    sortedInsert(&head, new_node);
        cout<<"\nDo you want to add more nodes ? (y/n)";
        cin>>c;
    }while(c == 'y');

	cout<<"\nCreated Linked List\n";
	printList(head);

	return 0;
}
