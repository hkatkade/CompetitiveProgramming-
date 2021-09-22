class Solution {
public:
    bool dfs(TreeNode* root,int val){
        if(!root){
            return true;    
        }
        if(root->val!=val){
            return false;
        }
        return dfs(root->left,val) && dfs(root->right,val);
    }
    bool isUnivalTree(TreeNode* root) {
        if(!root){
            return true;
        }
        int val=root->val;
        return dfs(root,val);
    }
};