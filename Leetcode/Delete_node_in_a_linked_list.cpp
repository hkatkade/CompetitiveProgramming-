#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *curr=node->next;
        while(curr->next){
            node->val=curr->val;
            curr=curr->next;
            node=node->next;
        }
        node->val=curr->val;
        node->next=NULL;
        delete(curr);
    }
};