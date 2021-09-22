class Solution {
public:
    unordered_map<int,int> m;
    void helper(TreeNode* root){
        if(!root){
            return;
        }
        m[root->val]++;
        helper(root->left);
        helper(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        if(!root){
            return ans;
        }
        helper(root);
        int maxi=INT_MIN;
        for(auto &i:m){
            maxi=max(maxi,i.second);
        }
        for(auto &i:m){
            if(i.second==maxi){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};