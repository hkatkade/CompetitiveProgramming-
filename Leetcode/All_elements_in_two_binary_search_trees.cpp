class Solution {
public:
    vector<int> a;
    void dfs(TreeNode* root){
        if(!root){
            return;
        }
        dfs(root->left);
        a.push_back(root->val);
        dfs(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        dfs(root1);
        dfs(root2);
        sort(a.begin(),a.end());
        return a;
    }
};