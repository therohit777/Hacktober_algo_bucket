#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;

    node(int value)
    { //  constructor calling
        prev = NULL;
        data = value;
        next = NULL;
    }
};

void insert_at_head(node *&head, int value)
{

    node *newnode = new node(value);
    newnode->next = head;

    if (head != NULL)
    {
        head->prev = newnode;
    }

    head = newnode;
}

void insert_at_tail(node *&head, int value)
{

    if (head == NULL)
    {
        insert_at_head(head, value);
        return;
    }

    node *newnode = new node(value);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Driver code
int main()
{
    node *head = NULL; // declaring an empty doubly linked list

    // Function call
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);

    cout << "After insertion at tail: ";
    print(head);

    cout << "After insertion at head: ";
    insert_at_head(head, 0);

    print(head);
    return 0;
}
