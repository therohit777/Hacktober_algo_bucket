#include<iostream>
using namespace std;
    struct Node         
    {
        int data;       
        Node *next;     
        
    };
   int main()
    {
        int flag=0;
        struct Node* newnode1 = (struct Node*) malloc(sizeof(struct Node));
        struct Node* newnode2 = (struct Node*) malloc(sizeof(struct Node)); 
        struct Node* newnode3 = (struct Node*) malloc(sizeof(struct Node));  
        struct Node* newnode4 = (struct Node*) malloc(sizeof(struct Node)); 
        struct Node* newnode5 = (struct Node*) malloc(sizeof(struct Node)); 
        struct Node* newnode6 = (struct Node*) malloc(sizeof(struct Node));  
        struct Node* newnode7 = (struct Node*) malloc(sizeof(struct Node)); 
        struct Node* firstnode = (struct Node*) malloc(sizeof(struct Node));  
        struct Node* secondnode = (struct Node*) malloc(sizeof(struct Node));
        
        newnode1->data=1;
        newnode2->data=2;
        newnode3->data=3;
        newnode4->data=4;
        newnode5->data=5;
        newnode6->data=6;
        newnode7->data=7;
          
         //////////////////////////////
         //we are providing no loop here
        newnode1->next=newnode2;      
        newnode2->next=newnode3;
        newnode3->next=newnode4;
        newnode4->next=newnode5;      
        newnode5->next=newnode6;
        newnode6->next=newnode7;
        newnode7->next=NULL;
      
      
        firstnode=newnode1;
        secondnode=newnode1;
        while(firstnode!=NULL&&secondnode->next!=NULL)
        {
            firstnode=firstnode->next;
            secondnode=secondnode->next->next;
            if(firstnode==secondnode)
            {
                flag=1;
                cout<<"The linked list contains a loop\n";
                break;
            }
            
        }
        if(flag==0)
        cout<<"There is no loop in the linked list\n";
      
        newnode1->next=newnode2;      
        newnode2->next=newnode3;
        newnode3->next=newnode4;
        newnode4->next=newnode5;      
        newnode5->next=newnode6;
        newnode6->next=newnode1;
        newnode7->next=NULL;
      
      
        firstnode=newnode1;
        secondnode=newnode1;
        while(firstnode!=NULL&&secondnode->next!=NULL)
        {
            firstnode=firstnode->next;
            secondnode=secondnode->next->next;
            if(firstnode==secondnode)
            {
                flag=1;
                cout<<"\nThe linked list contains a loop";
                break;
            }
            
        }
        if(flag==0)
        cout<<"There is no loop in the linked list";
        
    }
