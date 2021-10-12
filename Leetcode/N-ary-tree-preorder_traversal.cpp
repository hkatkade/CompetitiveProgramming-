class Solution {
public:
    vector<int> ans;
    void helper(Node *root){
        if(!root){
            return;
        }
        ans.push_back(root->val);
        for(auto &i:root->children){
            helper(i);
        }
    }
    vector<int> preorder(Node* root) {
        helper(root);
        return ans;
    }
};