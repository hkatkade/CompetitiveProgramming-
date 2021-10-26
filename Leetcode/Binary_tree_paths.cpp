class Solution {
public:
    vector<string> ans;
    void helper(TreeNode* root,string s){
        if(!root){
            return;
        }
        s+=to_string(root->val);
        if(!root->left && !root->right){
            ans.push_back(s);
        }
        s+="->";
        helper(root->left,s);
        helper(root->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root){
            return ans;
        }
        helper(root,"");
        return ans;
    }
};