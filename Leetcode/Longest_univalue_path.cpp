class Solution {
public:
    int ans=0;
    int helper(TreeNode* root,int prev){
        if(!root){
            return 0;
        }
        int l=helper(root->left,root->val);
        int r=helper(root->right,root->val);
        ans=max(ans,l+r);
        
        if(root->val==prev){
            return max(r,l)+1;
        }
        return 0;
        
    }
    int longestUnivaluePath(TreeNode* root) {
        if(!root){
            return 0;
        }
        helper(root,-1);
        return ans;
    }
};