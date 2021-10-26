class Solution {
public:
    bool helper(vector<vector<int>>& dp, vector<int>& nums,int sum,int idx,int n){
        if(sum==0){
            return true;
        }
        if(sum<0 || idx>=n){
            return false;
        }
        if(dp[sum][idx]!=-1){
            return dp[sum][idx];
        }
        return dp[sum][idx]=helper(dp,nums,sum-nums[idx],idx+1,n) || helper(dp,nums,sum,idx+1,n);
    }
    bool canPartition(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(auto &i:nums){
            sum+=i;
        }
        if(sum%2){
            return false;
        }
        vector<vector<int>> dp(sum/2+1,vector<int>(n+1,-1));
        return helper(dp,nums,sum/2,0,n);
    }
};