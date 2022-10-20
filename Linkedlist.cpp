#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node{
    int info;
    struct Node *next;
};

struct Node *head = NULL;

// Create a Node of linkedlist
struct Node * CreateNode()
{
    struct Node *newNode;
    int value;
    printf("Enter the value to be inserted : ");
            scanf("%d", &value);
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = value;
    newNode->next = NULL;
    return(newNode);
}


struct Node * CreateLL(struct Node * head)
{
    int value, ch = 0;
    struct Node *ptr, *qtr;
    printf("Lets Create Linked List\n ");
    do{
        ptr = CreateNode();

        if(head == NULL)
            head = ptr;
        else{
            qtr = head;
            while(qtr->next != NULL)
                qtr = qtr->next;
            qtr->next = ptr;
            }
        printf("Do you want to add more values (0/1)");
            scanf("%d", &ch);
        }while(ch != 0);
    return(head);      
}

struct Node * displayLL(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    if(head == NULL)
        printf("LIST is EMPTY");
    else {
        while(ptr != NULL)
        {
            printf(" %d ", ptr->info);
            ptr = ptr->next;
        }
    }
    return(head);
}
// Insert a node at front
struct Node * insertAtBeg(struct Node * head)
{
    struct Node *newNode;
    newNode = CreateNode();
    newNode->next = head;
    head = newNode;
    return(head);
}
// Insert Node at the end.
struct Node * insertAtEnd(struct Node *head)
{
    struct Node *newNode, *ptr;
    newNode = CreateNode();
    ptr = head;
    while(ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = newNode;
    
    return(head);
    
}

struct Node *InsertBetween(struct Node * head, int pos)
{
    struct Node *ptr, *newNode;
    int count =1;
    ptr = head;
    newNode = CreateNode();
    while(count < (pos-1))
    {
        ptr = ptr->next;
        count++;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
    return(head);
}
// function to update info field.
struct Node* upDate(struct Node*head, int old, int snew)
{
    struct Node *ptr;
    ptr = head;
    while (ptr->next!= NULL)
    {
    
        if(ptr->info == old)
            ptr->info = snew;
        ptr = ptr->next;
    }
    return(head);
}
struct Node * DeleteatFirst(struct Node * head)
{
    head = head->next;
    return(head);
}
struct Node * DeleteatEnd(struct Node* head)
{
    struct Node *ptr = head;
    while(ptr->next->next != NULL)
        ptr = ptr->next;
    ptr->next = NULL;
    return(head);
}

struct Node * Deletebetween(struct Node* head, int pos)
{
    struct Node *ptr, *newNode;
    int count =1;
    ptr = head;
    while(count < (pos-1))
    {
        ptr = ptr->next;
        count++;
    }
    newNode = ptr->next;
    ptr->next = newNode->next;
    return(head);
}

int main()
{
    int ch1;
    int pos, old, snew;
    printf("\n-----PROGRAM TO CREATE LINKED LIST-------\n");
    do{
        printf("\nEnter your choice: \n");
        printf("\n1......Create List");
        printf("\n2......Display List");
        printf("\n3......Insert at beginning");
        printf("\n4......Insert at End");
        printf("\n5..... Insert in between");
        printf("\n6..... Update the list Node");
        printf("\n7......Delete at First");
        printf("\n8......Delete at End");
        printf("\n9......Delete in between");
        printf("\n0......Exit");
            scanf("%d", &ch1);
    
    switch (ch1)
    {
    case 1:
            head = CreateLL(head);
            break;
    case 2:
            head = displayLL(head);
            break;
    case 3:
            head = insertAtBeg(head);
            break;
    case 4:
            head = insertAtEnd(head);
            break;
    case 5:
            printf("Enter the position to insert new node:");
                scanf("%d", &pos);
            head = InsertBetween(head, pos);
            break;
    case 6:
            printf("Enter the node value to be updated:");
                scanf("%d", &old);
            printf("Enter the value to update:");
                scanf("%d", &snew);
            head = upDate(head, old, snew);
            break;
    case 7:
            head = DeleteatFirst(head);
            break;
    case 8:
            head = DeleteatEnd(head);
            break;
    case 9:
            printf("Enter the position to delete node:");
                scanf("%d", &pos);
            head = Deletebetween(head, pos);
            break;
            
    case 0:
        printf("\n-----BYE-BYE------\n");
        exit(0);
    }
    }while(1);
}
