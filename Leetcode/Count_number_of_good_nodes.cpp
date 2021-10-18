class Solution {
public:
    int ans=0;
    void helper(TreeNode* root,int prev){
        if(!root){
            return;
        }
        if(root->val>=prev){
            ans++;
        }
        helper(root->left,max(prev,root->val));
        helper(root->right,max(prev,root->val));
    }
    int goodNodes(TreeNode* root) {
        if(!root){
            return 0;
        }
        helper(root,root->val);
        return ans;
    }
};