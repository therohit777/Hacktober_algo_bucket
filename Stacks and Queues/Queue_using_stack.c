#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *createqueue(node *first)
{
    printf("Enter the number of element you want to inset in the Queue.\n");
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        node *temp = (node *)malloc(sizeof(node));
        printf("Enter the data.\n");
        scanf("%d", &temp->data);
        temp->next = NULL;
        first = temp;
        for (int i = 1; i < n; i++)
        {
            temp->next = (node *)malloc(sizeof(node));
            temp = temp->next;
            printf("Enter the data.\n");
            scanf("%d", &temp->data);
            temp->next = NULL;
        }
    }
    return first;
}
int isFull(node *top)
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        return 1;
    }
    return 0;
}
node *push(node *head)
{
    node *p = head;
    if (isFull(head))
    {
        printf("Queue Overflow\n");
    }
    else
    {
        node *temp = (node *)malloc(sizeof(node));
        printf("Enter the data of element.\n");
        scanf("%d", &temp->data);
        temp->next = NULL;
        if (head == NULL)
        {
            p = temp;
        }
        else
        {
            while (head->next != NULL)
            {
                head = head->next;
            }
            temp->next = head->next;
            head->next = temp;
        }
    }
    return p;
}
int isEmpty(node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    return 0;
}
node *pop(node *first)
{
    if (isEmpty(first))
    {
        printf("The Queue is empty.\n");
    }
    else
    {
        printf("%d is popped out.\n", first->data);
        node *temp = first;
        first = first->next;
        int x = temp->data;
        // temp->next = NULL;
        free(temp);
        return first;
    }
}
void front(node *first)
{
    if (first == NULL)
    {
        printf("The Queue is empty.\n");
    }
    else
    {
        printf("The front element is %d.\n", first->data);
    }
}
void printQueue(node *first)
{
    printf("The elements in the Queue are\n");
    while (first != NULL)
    {
        printf("%d\n", first->data);
        first = first->next;
    }
}
int main()
{
    node *first = createqueue(first);
    int i = 0;
    do
    {
        printf("Want to insert more press 1 else 0.\n");
        printf("2. Want to pop element from the Queue.\n");
        printf("3. is full.\n");
        printf("4. is empty.\n");
        printf("5. Print front element .\n");
        scanf("%d", &i);
        if (i == 1)
        {
            first = push(first);
        }
        else if (i == 2)
        {
            first = pop(first);
        }
        else if (i == 3)
        {
            if (isFull(first))
            {
                printf("The Queue is full\n");
            }
            else
            {
                printf("The Queue is not full.\n");
            }
        }
        else if (i == 4)
        {
            if (isEmpty(first))
            {
                printf("The Queue is Empty\n");
            }
            else
            {
                printf("The Queue is not empty.\n");
            }
        }
        else if (i == 5)
        {
            front(first);
        }
    } while (i);
    printQueue(first);
    return 0;
}