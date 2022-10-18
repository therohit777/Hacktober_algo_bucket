/**
 * Question Link : https://leetcode.com/problems/intersection-of-two-linked-lists/description/
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* A = headA;
        ListNode* B = headB;
        
        while(A && B && A != B){
            A = A -> next;
            B = B -> next;
            
            if(A == B)
                return A;
            
            if(A == NULL)
                A = headB;
            if(B == NULL)
                B = headA;
        }
        return A;
    }
};