    /*

     * C Program to Print Nth Node from the last of a Linked List 

     */

    #include <stdio.h>

    #include <stdlib.h>

     

    struct node

    {

        int num;

        struct node *next;

    };

     

    void create(struct node **);

    void nthnode(struct node *, int);

    void release(struct node **);

     

    int main()

    {

        struct node *p = NULL;

        int n;

     

        printf("Enter data into the list\n");

        create(&p);

        printf("Enter the value n to find nth position from the last node: ");

        scanf("%d", &n);

        nthnode(p, n);

        release (&p);

     

        return 0;

    }

     

    void nthnode(struct node *head, int n)

    {

        struct node *p, *q;

        int i;

     

        q = p = head;

     

        for (i = 0; i < n && q != NULL; i++)

        {

            q = q->next;

        }

        if (i < n)

        {

            printf("Entered n = %d is larger than the number of elements = %d in list. Please try again.\n", n, i);

        }

        else

        {

            while (q->next != NULL)

            {

                q = q->next;

                p = p->next;

            }

            printf("%d is %d nodes from the last node.\n", p->num, n);

        }

    }

     

    void create(struct node **head)

    {

        int c, ch;

        struct node *temp, *rear;

     

        do

        {

            printf("Enter number: ");

            scanf("%d", &c);

            temp = (struct node *)malloc(sizeof(struct node));

            temp->num = c;

            temp->next = NULL;

            if (*head == NULL)

            {

                *head = temp;

            }

            else

            {

                rear->next = temp;

            }

            rear = temp;

            printf("Do you wish to continue [1/0]: ");

            scanf("%d", &ch);

        } while (ch != 0);

        printf("\n");

    }

     

    void release(struct node **head)

    {

        struct node *temp = *head;

        *head = (*head)->next;

        while ((*head) != NULL)

        {

            free(temp);

            temp = *head;

            (*head) = (*head)->next;

        }

    }
