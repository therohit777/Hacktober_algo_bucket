#include <iostream>
#include<stdio.h>
using namespace std;

class Node
{
public:
 Node *lchild;
 int data;
 Node *rchild;
};

class Queue
{
private:
 int front;
 int rear;
 int size;
 Node **Q;
public:
Queue()
{
     front=rear=-1;
     size=10;
     Q=new Node*[size];
     
}
Queue(int size)
{
     front=rear=-1;
     this->size=size;
     Q=new Node*[size];
 }
 void enqueue(Node *x);
 Node *dequeue();
int isEmpty()
{
     return front==rear;
}
};
void Queue::enqueue(Node *x)
{
 if(rear==size-1)
 printf("Queue Full\n");
 else
 {
 rear++;
 Q[rear]=x;
 }
}
Node *Queue::dequeue()
{Node *x=NULL;
    if(front==rear)
    printf("Queue is Empty\n");
    else
    {

    x=Q[front+1];
    front++;
    }
    return x;
   }
class Stack
{
private:
 int top;
 int size;
 Node **S;
public:
Stack()
{
     top=-1;
     size=10;
     S=new Node*[size];
     
}
Stack(int size)
{
    top=-1;
    this->size=size;
     S=new Node*[size];
 }
 void push(Node *x);
 Node *pop();
Node * stacktop()
{
    return S[top--];
}
int isstackEmpty()
{
     return top= -1;
}
};
void Stack::push(Node *x)
{
 if(top== size-1)
 printf("Queue Full\n");
 else
 {
 top++;
 S[top]=x;
 }
}
Node *Stack :: pop()
{
    Node *x=NULL;
    if(top == -1)
    printf("Queue is Empty\n");
    else
    {
    x=S[top];
    top--;
    }
    return x;
   }
   



class Tree
   {
    Node *root;
   public:
    Tree(){root=NULL;}
    void CreateTree();
    Node * Rsearch(Node * t , int key);
    Node * Isearch(Node * t , int key);
   };

void Tree::CreateTree()
{
 Node *p,*t=NULL;
 int x;
 Queue q(100);
 printf("Enter root value ");
 scanf("%d",&x);
 root=new Node;
 root->data=x;
 root->lchild=root->rchild=NULL;
    q.enqueue(root);
     while(!q.isEmpty())
     {
     p=q.dequeue();
     printf("enter left child of %d ",p->data);
     scanf("%d",&x);
     if(x!=-1)
     {
     t=new Node;
     t->data=x;
     t->lchild=t->rchild=NULL;
     p->lchild=t;
     q.enqueue(t);
     }
     printf("enter right child of %d ",p->data);
     scanf("%d",&x);
     if(x!=-1)
     {
     t=new Node;
     t->data=x;
     t->lchild=t->rchild=NULL;
     p->rchild=t;
     q.enqueue(t);
     }
     }
    }

Node * Rsearch(Node * t , int key)
{
    if(t==NULL)
    {
        return NULL;
    }
    else if(t->data==key)
    {
        return t;
    }
    else if(t->data>key)
    {
        return Rsearch(t->lchild, key);
    }
    else
    {
        return Rsearch(t->rchild, key);
        
    }
        
}

Node * Isearch(Node *t,int key)
{
    while(t!= NULL)
    {
        if(t->data == key)
        {
            return t;
        }
        else if (t->data > key)
        {
            t = t->lchild;
        }
        else
        {
            t=t->rchild;
        }
    }
    return t;
}

Node * insert(Node *t,int key)
{
    Node *r=NULL;
    
    
    while(t!= NULL)
    {
        r=t;
        if(t->data == key)
        {
            return NULL;
        }
        else if (t->data > key)
        {
            t = t->lchild;
        }
        else
        {
            t=t->rchild;
        }
    }
    Node *p = new Node;
    p->data=key;
    p->lchild=p->rchild=NULL;
    if(r->data > p->data)
    {
        r->lchild=p;
    }
    else
    {
        r->rchild=p;
    }
    return p;
}

/*void createPre(int pre[],int n)
{
    Stack st;
     Node*t=NULL;
    Node*p=NULL;

    int i=0;
  Node * root = new Node;
    root->data=pre[i++];
    root->lchild=root->rchild=NULL;
    root = p;
    
    while(i<8)
    {
        if(p->data > pre[i])
        {
            t =new Node;
            t->data = pre[i++];
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            st.push(p);
            p=t;
        }
 //       if(p->data < pre[i] && pre[i]< st.stacktop())
        {
            t =new Node;
            t->data = pre[i++];
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            p=t;
        }
       else
       {
           p = st.pop();
       }
        
    }
    
    
}
*/

int main()
{
    Tree t;
    int pre[7]={1,2,3,4,5,6,7 };
    
    t.CreateTree();
    
    
    return 0;
}
   
