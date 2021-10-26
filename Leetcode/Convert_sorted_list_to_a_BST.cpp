class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        
        if(head == NULL)  
            return NULL;
        
        if(head->next == NULL){
            TreeNode *temp = new TreeNode(head->val);
            return temp;
        }
        ListNode *slow = head, *fast =head;
        while(fast!= NULL && fast->next!= NULL)
        {
            if(fast!=head)
                slow = slow->next;
            fast = fast->next->next;
        }
        TreeNode *root = new TreeNode(slow->next->val);
        ListNode *right = slow->next->next;
        slow->next = NULL;
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(right);
        return root;
    }
};



