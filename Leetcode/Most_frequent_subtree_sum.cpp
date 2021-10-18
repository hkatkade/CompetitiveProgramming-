class Solution {
public:
    unordered_map<int,int> m;
    int sum=0;
    int helper(TreeNode* root){
        if(!root){
            return 0;
        }
        sum=root->val+helper(root->left)+helper(root->right);
        m[sum]++;
        return sum;
        
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ans;
        if(!root){
            return ans;
        }
        int sum=helper(root);
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