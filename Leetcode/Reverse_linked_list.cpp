class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head){
            return NULL;
        }
        ListNode *prev=NULL,*curr=head;
        ListNode *nnext;
        while(curr!=NULL){
            nnext=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nnext;
        }
        return prev;
    }
};