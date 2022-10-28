
2
#include <bits/stdc++.h>
3
using namespace std;
4
​
5
​
6
class Node
7
{
8
    public:
9
    int data;
10
    Node* next;
11
    Node* prev;
12
};
13
​
14
​
15
void deleteNode(Node** head_ref, Node* del)
16
{
17
​
18
    if (*head_ref == NULL || del == NULL)
19
        return;
20
​
21
​
22
    if (*head_ref == del)
23
        *head_ref = del->next;
24
​
25
​
26
    if (del->next != NULL)
27
        del->next->prev = del->prev;
28
​
29
    if (del->prev != NULL)
30
        del->prev->next = del->next;
31
​
32
​
33
    free(del);
34
    return;
35
}
36
​
37
​
38
void push(Node** head_ref, int new_data)
39
{
40
​
41
    Node* new_node = new Node();
42
​
43
​
44
    new_node->data = new_data;
45
​
46
​
47
    new_node->prev = NULL;
48
​
49
​
50
    new_node->next = (*head_ref);
51
​
52
​
53
    if ((*head_ref) != NULL)
54
        (*head_ref)->prev = new_node;
55
​
56
​
57
    (*head_ref) = new_node;
58
}
59
​
60
​
61
void printList(Node* node)
62
{
63
    while (node != NULL)
64
    {
65
        cout << node->data << " ";
66
        node = node->next;
67
    }
68
}
69
​
70
​
71
int main()
72
{
73
​
74
    Node* head = NULL;
75
​
76
​
77
    push(&head, 2);
78
    push(&head, 4);
79
    push(&head, 8);
80
    push(&head, 10);
81
​
82
    cout << "Original Linked list ";
83
    printList(head);
84
​
85
​
86
    deleteNode(&head, head);
87
    deleteNode(&head, head->next); 
88
    deleteNode(&head, head->next); 
89
​
90
​
91
    cout << "\nModified Linked list ";
92
    printList(head);
93
​
94
    return 0;
95
}
96
​
97
​
98
​
