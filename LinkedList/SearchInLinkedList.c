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
    newNode->next = NULL;  
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
     int n;
     
    
     scanf("%d",&n);
     
     for(int i=0;i<n;i++){
         int x;
         scanf("%d",&x);
          addLast(&head,x);
     }
    struct node *ptr;  
    
    int element,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Empty List\n");  
    }  
    else  
    {   
        printf("\nEnter element which you want to search?\n");   
        scanf("%d",&element);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == element)  
            {  
                printf("element found at location %d \n ",i+1);  
                flag=0;  
                break;
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
            
        }  
        if(flag==1)  
        {  
            printf("element not found\n");  
        }  
        
    }  

     return 0;
}
