/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head;
        ListNode *t = head;
        int len = 1;
        if (head == NULL && head->next == NULL)
            return NULL;
        while (temp->next != NULL)
        {
            len++;
            temp = temp->next;
        }
        if (len <= 1)
        {
            return NULL;
        }
        if (len == n)
        {
            return head->next;
        }
        int c = len - n;
        int cnt = 1;
        while (cnt < c)
        {
            t = t->next;
            cnt++;
        }
        ListNode *a = t->next;
        t->next = a->next;
        a->next = NULL;
        delete a;
        return head;
    }
};