class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head!=NULL && head->val==val){
        head=head->next;}
        if(head==NULL)
        return NULL;
        ListNode *pointer;
        pointer=head;
        while(pointer->next!=nullptr)
        {
            if(pointer->next->val==val){
            pointer->next=pointer->next->next;
        }
        else{
            pointer=pointer->next;
        }
        }
        return head; 
    }
};
