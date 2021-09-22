class Solution {
public:
    int ans=0;
    int sum(TreeNode* root){
        if(!root){
            return 0;
        }
        return sum(root->left)+root->val+sum(root->right);
    }
    int findTilt(TreeNode* root) {
        if(!root){
            return 0;
        }
        int left=sum(root->left);
        int right=sum(root->right);
        ans+=abs(left-right);
        findTilt(root->right);
        findTilt(root->left);
        return ans;
    }
};