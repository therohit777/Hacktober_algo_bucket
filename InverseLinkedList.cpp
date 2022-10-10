#include <iostream>
#include <stack>

using namespace std;

//creating linkedlist

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

Node *createLL(int *arr, int n)
{
    struct Node *last, *temp;
    first=new Node();
    first->data=arr[0];
    first->next=NULL;
    
    last=first;
    
    for(int i=1; i<n; i++)
    {
        temp=new Node();
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    
    // print the formed linked list
    // struct Node *p=first;
    // while(p!=NULL)
    // {
    //     cout<<p->data<<" ";
    //     p=p->next;
    // }
    return first;
}

// Reverse printing the elements of a linked list
void inverse(struct Node *p, int n)
{
    stack<int> s;
    
    //elements stored in stack
    struct Node *q=p;
    while(q!=NULL)
    {
        s.push(q->data);
        q=q->next;
    }
    
    //printing reverse elements
    for(int j=0; j<n; j++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
}
int main()
{
    //take input in array
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    //call the function to create linked list
    struct Node *LL=createLL(arr,n);
    //call the function to inverse the linked list
    inverse(LL,n);
    
}
