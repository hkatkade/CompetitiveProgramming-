class Solution {
public:
    vector<vector<int>> ans;
    void helper(int ind,vector<int>& nums,vector<int>& curr){
        ans.push_back(curr);
        for(int i=ind;i<nums.size();i++){
            curr.push_back(nums[i]);
            helper(i+1,nums,curr);
            curr.pop_back();
        }
        return;
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        helper(0,nums,curr);
        return ans;
    }
};