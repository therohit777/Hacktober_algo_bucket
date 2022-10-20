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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *temp=head;
        ListNode *temp1=temp->next;
        while(temp->next!=NULL && temp1!=NULL){
            if(temp->val==temp1->val ){
                if(temp1->next==NULL){
                    temp->next=NULL;
                    delete (temp1);
                    return head;
                }
                else{
                    ListNode* temp2=temp1;
                    temp1=temp1->next;
                    temp->next=temp1;
                    delete(temp2);
                    
                }
                
            }
            else{
                temp=temp1;
                temp1=temp1->next;
            }
        }
        return head;
    }
};
