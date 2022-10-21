#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
     node* next;
};

void push(node** edokati, int n){
    node* ptr = new node();

    ptr->data = n;
    ptr->next = (*edokati);
    (*edokati) = ptr;
}

void insertafter(node* venaka, int n){
    node* ptr = new node();

    ptr->data = n;
    ptr->next = venaka->next;
    venaka->next = ptr;
}

void append(node** head, int n){
    node* ptr = new node();

    ptr->data = n;
    ptr->next = NULL;

    node *last = (*head);

    while(last->next != NULL){
        last = last->next;
    }

    last->next = ptr;
}

void print(node *n)
{
    while (n != NULL)
    {
        cout<<" "<<n->data;
        n = n->next;
    }
}

int main(){
    node* head = NULL;

    push(&head, 6);
    push(&head, 7);
    push(&head, 8);
    insertafter(head, 9);
    append(&head, 10);

    print(head);
}