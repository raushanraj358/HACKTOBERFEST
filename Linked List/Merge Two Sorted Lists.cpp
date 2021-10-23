class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(),*head=ans;
        while(l1 or l2){
            if(l1 and l2){
                if(l1->val<l2->val)ans->next=new ListNode(l1->val),l1=l1->next;
                else ans->next=new ListNode(l2->val),l2=l2->next;
            }
            else if(l1)ans->next=new ListNode(l1->val),l1=l1->next;
            else if(l2)ans->next=new ListNode(l2->val),l2=l2->next;
            ans=ans->next;
        }
        return head->next;
    }
};
