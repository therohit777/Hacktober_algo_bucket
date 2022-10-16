#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

// function declaration for displaying the doubly linked list
void display_doubly_list(struct node *q)
{
    if (q == NULL) // checking whether the list is empty or not
    {
        printf("List is empty!");
    }
    else
    {
        while (q != NULL)
        {
            printf("%d\n", q->data);
            q = q->next;
        }
    }
}

// function declaration of insert at end
void insert_at_beg(struct node **q, int num)
{
    struct node *p, *r;
    r = *q; // storing the head in r

    p = (struct node *)malloc(sizeof(struct node)); // creating new node
    p->prev = NULL;         // initially the value of *q is NULL after then it will store the value of the next node
    p->data = num;          // inputting the data
    p->next = r;            // storing the head value in p->next
    *q = p;         // storing the address of new node in head

    display_doubly_list(*q); // displaying the data in doubly linked list
}

// function declaration of inserting data at the end of the list
void insert_at_end(struct node **q, int num)
{
    struct node *p, *r;
    r = *q;

    if (r == NULL)
    {
        // insert_at_beg function
        struct node *p, *r;
        r = *q;

        p = (struct node *)malloc(sizeof(struct node));
        p->prev = NULL;
        p->data = num;
        p->next = r;
        *q = p;
    }
    else
    {
        while (r->next != NULL)
        {
            r = r->next;
        }
        p = (struct node *)malloc(sizeof(struct node));
        p->prev = r;
        p->data = num;
        p->next = NULL;
        r->next = p;
    }
    display_doubly_list(*q); // displaying the data in doubly linked list
}

// function declaration of inserting data at a specific position of the list
void insert_at(struct node **q, int position, int num)
{
    struct node *p, *r;
    int count = 1;
    r = *q;
    if (r == NULL)
    {
        // insert_at_beg function
        struct node *p, *r;
        r = *q;

        p = (struct node *)malloc(sizeof(struct node));
        p->prev = NULL;
        p->data = num;
        p->next = r;
        *q = p;
    }
    else
    {
        while (count != position - 1)
        {
            r = r->next;
            count++;
        }
        p = (struct node *)malloc(sizeof(struct node));
        p->prev = r;
        p->data = num;
        p->next = r->next;
        r->next = p;
    }
    display_doubly_list(*q); // displaying the data in doubly linked list
}

// function declaration for deletion of data at the beginning of the list
void delete_at_beg(struct node **q)
{
    struct node *r;
    r = *q;

    if (r == NULL)
    {
        printf("No data to delete in the list.\n");
    }
    else
    {
        *q = r->next;
        free(r);
    }
    display_doubly_list(*q); // displaying the data in doubly linked list
}


//function declaration of deleting data at the end of the list
void delete_at_end(struct node **q)
{
    struct node *r, *s;
    r = *q;
    if (r == NULL)
    {
        printf("No data to delete in the list.\n");
    }
    else
    {
        while (r->next != NULL)
        {
            s = r;
            r = r->next;
        }
        s->next = NULL;
        free(r);
    }
    display_doubly_list(*q); // displaying the data in doubly linked list
}

// main function
int main()
{
    struct node *head;
    head = NULL;
    int choice, data, position;

    printf("Enter the operation to perform : \n");
    printf(" 1. Insert at beginning \n 2. Insert at end \n 3. Insert at  \n 4. Delete at beginning \n 5. Delete at end \n 6. Delete at \n 7. Display \n 8. Exit");

    while (1)
    {
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data to insert at beginning : ");
            scanf("%d", &data);

            insert_at_beg(&head, data);
            break;

        case 2:
            printf("Enter the data to insert at end : ");
            scanf("%d", &data);

            insert_at_end(&head, data);
            break;

        case 3:
            printf("Enter the position to insert : ");
            scanf("%d", &position);

            printf("Enter the data to insert : ");
            scanf("%d", &data);

            insert_at(&head, position, data);
            break;

        case 4:
            delete_at_beg(&head);
            break;

        case 5:
            delete_at_end(&head);
            break;
        
        case 6:
            printf("Enter the position to delete : ");
            scanf("%d", &position);

            delete_at(&head, position);
            break;
            
        case 7:
            display_doubly_list(head);
            break;

        case 8:
            exit(0);
            break;

        default:
            printf("Please enter a valid choice!\n");
            break;
        }
    }
    return 0;
}
