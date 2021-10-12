class Solution {
public:
    vector<int> ans;
    void helper(Node* root){
        if(!root){
            return;
        }
        for(auto &i:root->children){
            helper(i);
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        helper(root);
        return ans;
    }
};