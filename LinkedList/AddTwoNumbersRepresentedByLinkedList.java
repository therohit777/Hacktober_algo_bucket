/*

Question Link : https://leetcode.com/problems/add-two-numbers/
*/

class AddTwoNumbersRepresentedByLinkedList {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode li = new ListNode(0);
        ListNode temp = li;
        int carry = 0;
        while(l1!=null && l2!=null){
            int sum = l1.val + l2.val + carry;
            if(sum >= 10){
                ListNode n = new ListNode(sum % 10);
                li.next = n;
                carry = 1;
            }else{
                ListNode n = new ListNode(sum);
                li.next = n;
                carry = 0;
            }
            l1 = l1.next;
            l2 = l2.next;
            li = li.next;
        }
        if(l1!=null){
            while(l1!=null){
                int sum = carry + l1.val;
                 if(sum >= 10){
                    ListNode n = new ListNode(sum % 10);
                    li.next = n;
                    carry = 1;
                }else{
                    ListNode n = new ListNode(sum);
                    li.next = n;
                     carry = 0;
                }
                li = li.next;
                l1 = l1.next;
            }
            if(carry!=0){
                ListNode n = new ListNode(carry);
                li.next = n;
            }
        }else if(l2!=null){
             while(l2!=null){
                int sum = carry + l2.val;
                 if(sum >= 10){
                    ListNode n = new ListNode(sum % 10);
                    li.next = n;
                    carry = 1;
                }else{
                    ListNode n = new ListNode(sum);
                    li.next = n;
                     carry = 0;
                }
                li = li.next;
                l2 = l2.next;
            }
            if(carry!=0){
                ListNode n = new ListNode(carry);
                li.next = n;
            }
        }else if(carry!=0){
            li.next = new ListNode(carry);
        }
        return temp.next;
    }
}
