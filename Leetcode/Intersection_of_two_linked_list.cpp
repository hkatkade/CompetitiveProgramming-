class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> a,b;
        while(headA!=NULL || headB!=NULL){
            cout<<"safasdas";
            if(headA){
                if(b.find(headA)!=b.end()){
                    return headA;
                }
                a.insert(headA);
                headA=headA->next;
            }
            if(headB){
                if(a.find(headB)!=a.end()){
                    return headB;
                }
                b.insert(headB);
                headB=headB->next;
            }
            
        }
        return NULL;
        
    }
};