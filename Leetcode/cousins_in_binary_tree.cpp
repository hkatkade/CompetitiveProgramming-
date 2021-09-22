class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode *p1,*p2;
        
        
        while(!q.empty()){
            int size = q.size();
            p1 = NULL;
            p2 = NULL;
            
            while(size--){
                TreeNode* node = q.front();
                q.pop();
                
                if((node->left && node->left->val == x) || (node->right && node->right->val == x))
                    p1 = node;
                else if((node->left && node->left->val == y) || (node->right && node->right->val == y))
                    p2 = node;
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            
            if(p1 && p2)
                return true;
        }
        return false;
    }
};