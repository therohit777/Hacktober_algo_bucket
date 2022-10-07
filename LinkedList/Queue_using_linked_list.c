#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct queue
{
	struct node *front;
	struct node *rear;
};

void display(struct queue *q)
{
	struct node *r;
	r = q->front;
	if(r == NULL)
	{
		printf("\nQueue empty!!\n");
	}
	else
	{
		while(r != NULL)
		{
			printf("%d\t", r->data);
			r = r->next;
		}
		printf("\n");
	}
}

int enqueue(struct queue **q, int data)
{
	struct node *p;
	struct queue *r;
	
	r = *q;
	p = (struct node *)malloc(sizeof(struct node));
	p->data = data;
	p->next = NULL;
	
	if(r->front == NULL && r->rear == NULL)
	{
		r->front = p;
		r->rear = p;
	}
	else
	{
		r->rear->next = p;
		r->rear = p;
	}
}

int dequeue(struct queue **q)
{
	struct queue *r; 
	struct node *temp;
	int data, count = 0;
	
	r = *q;
	
	if(r->front == NULL)
	{
		printf("\nNo data present to dequeue!!\n");
	}
	else
	{
		if(r->front->next == NULL)			// this is the for first element
		{
			data = r->front->data;
			temp = r->front;
			r->front = r->front->next;
			free(temp);
			
			r->front = NULL;
			r->rear = NULL;
		}
		else			// general logic
		{
			data = r->front->data;
			temp = r->front;
			r->front = r->front->next;
			free(temp);
		}

		printf("\nData dequeued is : %d\n", data);			
	}
}

void main()
{
	struct queue *head;
	int choice, data, n;

	head->front = NULL;
	head->rear = NULL;
	
	printf(" 1. Enqueue \n 2. Dequeue \n 3. Display \n 4. Exit \n");
	
	while(1)
	{
		printf("\nEnter your choice : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter the data to insert in the queue : ");
				scanf("%d", &data);
				
				enqueue(&head, data);
				break;

			case 2:
				dequeue(&head);
				break;

			case 3:
				display(head);
				break;

			case 4:
				exit(0);
				break;

			default:
				printf("Invalid chocie!!\n");	
				break;			
		}
	}
}
