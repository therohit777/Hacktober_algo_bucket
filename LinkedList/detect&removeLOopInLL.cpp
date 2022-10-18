#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *nxt;
    node(int x) {
        data = x;
        nxt = NULL;
    }
};

int main() {

    node *head= new node(10);
    head->nxt = new node(20);
    head->nxt->nxt = new node(30);
    head->nxt->nxt->nxt = new node(40);
    head->nxt->nxt->nxt->nxt = new node(50);
    head->nxt->nxt->nxt->nxt->nxt = new node(60);
    head->nxt->nxt->nxt->nxt->nxt->nxt = head->nxt->nxt;
    // NULL linked list
    // node *head = NULL;

    // detecting loop in linked list
    node *slow = head, *fast = head;
    while (fast != NULL && fast->nxt != NULL) {
        slow = slow->nxt;
        fast = fast->nxt->nxt;
        if (slow == fast) {
            break;
        }
    }
    if (slow != fast) {
        goto here;
    }
    slow = head;
    while (fast->nxt != slow->nxt) {
        fast = fast->nxt;
        slow = slow->nxt;
    }
    fast->nxt = NULL;

    here:
    node *pri = head;
    while (pri != NULL) {
        cout<<(pri->data)<<endl;
        pri = pri->nxt;
    }
    
    return 0;
}

/*
DIAGRAM :  ( these circles are node of a linked list )    
<----------m----------><--k--> 
①->②->③->④->⑤->⑥->⑦->⑧->⑨->⑩                      { ->⑪->⑫->⑬->⑭->⑮->⑯->⑰   , it's extra }
                      ⬆          ⎸ 
                      ⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺

{here the first meeting point of slow and fast will be at node no. 9}
so [[k range from 7 to 9]] && [[m range from 1 to 7]] 
{here n is the length of the loop so in this case n range from 7 to 10} 


LOGIC : 
no 


BEFORE FIRST MEETING POINT :
(distance travelled by slow) * 2 = (distance travelled by fast)   | x is no. of iteration made by slow in loop before 
(m + k + (x*n))*2  =  m + k + (y*n)                               | first meeting point . 
m + k = n*(y-2x)                                                  | y is no. of iteration made by fast in loop before      
                                                                  | first meeting point .

so here we can conclude that (m+k) is a multiple of n 

*/
