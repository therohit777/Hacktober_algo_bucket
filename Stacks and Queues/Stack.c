#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int array[10];
	int top_of_stack;
};

void display(struct stack *s)
{
	if(s->top_of_stack == -1)
	{
		printf("Stack is empty!!\n");
	}
	else
	{
		printf("\nStack : \n");
		for(int i = s->top_of_stack; i>=0; i--)
		{
			printf("%d\n", s->array[i]);
		}
		printf("\n");
	}
}

int push(struct stack *s, int item)
{
	if(s->top_of_stack >= 9)		// max_size of the array is 10
	{
		printf("\nStack overflow!!\n");
	}
	else
	{
		s->top_of_stack++;
		s->array[s->top_of_stack] = item;
	}
}

int pop(struct stack *s)
{
	int n;
	if(s->top_of_stack == -1)
	{
		printf("\nStack Underflow!!\n");
	}
	else
	{
		n = s->array[s->top_of_stack];
		s->top_of_stack--;
		
		printf("\nPoped Data is : %d\n", n);
	}
}

void main()
{
	struct stack s;
	int choice, data;
	
	s.top_of_stack = -1;
	
	printf("\nOperations on stack : \n");
	printf(" 1. Push \n 2. Pop \n 3. Display \n 4. Exit \n");
	
	while(1)
	{
		printf("\nEnter your choice : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter the data to push in the stack : ");
				scanf("%d", &data);
				
				push(&s, data);
				break;
				
			case 2:
				pop(&s);
				break;
				
			case 3:
				display(&s);
				break;
				
			case 4:
				exit(0);
				break;
				
			default:
				printf("\nEnter a valid option!!\n");
		}
	}
}
