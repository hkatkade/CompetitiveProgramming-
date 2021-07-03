// hashing method
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> s;
        while(head!=NULL){
            if(s.find(head)!=s.end()){
                return true;
            }
            head=head->next;
        }
        return false;   
    }
};

// floyd cycle finding algorithm
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast=head,*slow=head;
        while(fast!=NULL && slow!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
        
    }
};