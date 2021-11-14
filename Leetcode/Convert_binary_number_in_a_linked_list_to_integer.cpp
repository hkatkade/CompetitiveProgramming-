class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(!head){
            return 0;
        }
        int ans=head->val;
        while(head->next!=NULL){
            ans=(ans<<1)|head->next->val;
            head=head->next;
        }
        return ans;
        
    }
};