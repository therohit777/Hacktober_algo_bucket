class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy, *current = head;
        
        dummy->next = head;
        
        while(current != NULL && current->next != NULL)
        {
            prev->next = current->next;
            current->next = current->next->next;
            prev->next->next = current;
            current = current->next;
            prev = prev->next->next;
        }
        return dummy->next;
    }
};
