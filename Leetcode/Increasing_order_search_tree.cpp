class Solution {
public:
    TreeNode *ans=new TreeNode();
    TreeNode* curr=ans;
    void dfs(TreeNode* root){
        if(!root){
            return;
        }
        dfs(root->left);
        curr->right=new TreeNode(root->val);
        curr=curr->right;
        dfs(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(!root){
            return NULL;
        }
        
        dfs(root);
        return ans->right;
    }
};