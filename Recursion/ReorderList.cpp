class Solution {
public:
    void reorderList(ListNode* head) {
        //Using Stack: Time:O(n) and Space:O(n)
        if((!head) || (!head->next) || (!head->next->next))
            return;
        stack<ListNode*> st;
        int n = 0;
        ListNode* ptr = head;
        while(ptr){
            n++;
            st.push(ptr);
            ptr = ptr->next;
        }
        ListNode* cur = head;
        for(int j=0;j<n/2;j++){
            ListNode* element = st.top();
            st.pop();
            element -> next = cur->next;
            cur -> next = element;
            cur = cur -> next-> next;
        }
        cur -> next = NULL;
    }
};
