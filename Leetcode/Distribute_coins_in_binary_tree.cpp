class Solution {
public:
    int ans=0;
    int dfs(TreeNode* root){
        if(!root){
            return 0;
        }
        int l=dfs(root->left);
        int r=dfs(root->right);
        ans+=abs(l)+abs(r);
        return 1+l+r-root->val;
    }
    int distributeCoins(TreeNode* root) {
        if(!root){
            return 0;
        }
        dfs(root);
        return ans;
    }
};