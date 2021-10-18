class Solution {
public:
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        if(!root){
            return NULL;
        }
        if(!root->left && !root->right){
            if(root->val<limit){
                return NULL;
            }
            else{
                return root;
            }
        }
        root->left=sufficientSubset(root->left,limit-root->val);
        root->right=sufficientSubset(root->right,limit-root->val);
        if(root->left || root->right){
            return root;
        }
        else{
            return NULL;
        }
    }
};