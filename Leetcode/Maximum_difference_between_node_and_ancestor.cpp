class Solution {
public:
    int ans=0;
    void helper(TreeNode* root,int maxi,int mini){
        if(!root){
            return;
        }
        int temp=max(abs(root->val-maxi),abs(root->val-mini));
        ans=max(ans,temp);
        maxi=max(maxi,root->val);
        mini=min(mini,root->val);
        helper(root->left,maxi,mini);
        helper(root->right,maxi,mini);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root){
            return 0;
        }
        helper(root,root->val,root->val);
        return ans;
    }
};