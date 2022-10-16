#include <bits/stdc++.h>
using namespace std;


struct Node {
	int data;
	Node* next;
	Node* prev;
};


void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = (*head_ref);
	new_node->prev = NULL;

	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	(*head_ref) = new_node;
}

void append(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	Node* last = *head_ref; 

	new_node->data = new_data;

	new_node->next = NULL;

	if (*head_ref == NULL) {
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	new_node->prev = last;

	return;
}

void printList(Node* node)
{
	Node* last;
	cout << "\nTraversal in forward direction \n";
	while (node != NULL) {
		cout << " " << node->data << " ";
		last = node;
		node = node->next;
	}

	cout << "\nTraversal in reverse direction \n";
	while (last != NULL) {
		cout << " " << last->data << " ";
		last = last->prev;
	}
}


int main()
{
	Node* head = NULL;
    
    cout<<"Enter a head element:";
    int x;
    cin>>x;

	append(&head, x);

    cout<<"Size of a DLL (without the header element included):";
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter elements:";
        int y;
        cin>>y;
        push(&head, y);

    }

    cout << "Created DLL is: ";
	printList(head);


   

	

	return 0;
}