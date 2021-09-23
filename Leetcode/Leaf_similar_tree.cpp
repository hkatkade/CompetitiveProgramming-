class Solution {
public:
    vector<int> v;
    void dfs(TreeNode* root){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            v.push_back(root->val);
        }
        dfs(root->left);
        dfs(root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2){
            return true;
        }
        if((root1 && !root2) || (root2 && !root1)){
            return false;
        }
        dfs(root1);
        vector<int> v1=v;
        v.clear();
        dfs(root2);
        vector<int> v2=v;
        return v1==v2;
    }
};