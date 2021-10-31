class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head){
            return;
        }
        deque<ListNode*> dq;
        ListNode *curr=head;
        while(curr!=NULL){
            dq.push_back(curr);
            curr=curr->next;
        }
        int i=0;
        ListNode* temp=head;
        dq.pop_front();
        while(!dq.empty()){
            if(i%2==0){
                temp->next=dq.back();
                dq.pop_back();
            }
            else{
                temp->next=dq.front();
                dq.pop_front();
            }
            temp=temp->next;
            i++;
        }
        temp->next=NULL;
    }
};