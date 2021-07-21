class Solution {
public:
    vector<int> inorder;
    void helper(TreeNode* root){
        if(!root){
            return;
        }
        helper(root->left);
        inorder.push_back(root->val);
        helper(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        helper(root);
        return inorder[k-1];
    }
};