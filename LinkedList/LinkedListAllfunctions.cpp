#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
	public:
	int data;
	node *next;
};

class list
{
		node *head;

	public:
		list();
		int insert_at_beg(int data);
		int insert_at_end(int data);
		int delete_at_beg();
		int delete_at_end();
		int display();
};

list::list()
{
	head=NULL;
}
int list :: display()
{
	 node *temp;
	//temp=new node;
	temp=head;
	if(head==NULL)
	{
		cout<<"List is empty !!"<<endl;
	}
	else
	{
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}		
	}
}
int list :: insert_at_beg(int data)
{
	 node *temp;
	temp=new node;
	temp->data=data;
	temp->next=head;
	head=temp;
	display();

}
int list :: insert_at_end(int data)
{
	node *temp;
	temp=new node;
	temp=head;
	if(head==NULL)
	{
		temp->data=data;
		temp->next=head;
		head=temp;
		display();
	}
	else
	{
		struct node *p=new node;
		struct node *q;
		q=head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		p->data=data;
		p->next=NULL;
		q->next=p;
	}
	display();
}

int list ::delete_at_beg()
{
	node *p=head;
	if(p==NULL)
	{	
		cout<<"NO data to delete !!"<<endl;
	}
	else
	{
		head=p->next;
		delete p;
	}
	display();
	
	
}

int list :: delete_at_end()
{
	struct node *p,*q;
	p=head;
	if(head==NULL)
	{	
		cout<<"NO data to delete !!"<<endl;
		return 0;

	}
	while(p->next!=NULL)
	{
		q=p;
		p=p->next;	
	}
	q->next=NULL;
	delete p;
	display();
}
int main()
{
	int data1,data2,choice;
	list l;
	cout<<"1)Insert at beg \n 2)insert at end \n 3)Delete at beg \n 4)Delete at end\n 5)display\n 6)exit"<<endl;
	while(1)
	{
	    cout<<"Enter the choice:"<<endl;
	    cin>>choice;
        switch(choice)
        {
            case 1:     cout<<"Enter the data to insert to beg:";
                        cin>>data1;
                        l.insert_at_beg(data1);
                         break;

            case 2:	cout<<"Enter the data to insert at end:";
                        cin>>data2;
                        l.insert_at_end(data2);
                        break;

            case 3:	l.delete_at_beg();
                        break;

	    case 4:	l.delete_at_end();
			break;

            case 5:    	l.display();
                        break;
	    
	    default:	exit(0);
			break;		
	}
	}
	
}
