#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void addLast(struct node **head, int val)
{   
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next     = NULL;  
    if(*head == NULL)
         *head = newNode;       
    else
    {
        struct node *lastNode = *head;        
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }        
        lastNode->next = newNode;
    }

}

void printList(struct node *head)
{
    struct node *temp = head;   
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
     struct node *head = NULL;
     int n,y;
     
    
     scanf("%d",&n);
     
     for(int i=0;i<n;i++){
         int x;
         scanf("%d",&x);
          addLast(&head,x);
     }
     printf("Enter the value you want to add to the list \n");
     scanf("%d",&y);
     addLast(&head,y);

     printList(head);

     return 0;
}
