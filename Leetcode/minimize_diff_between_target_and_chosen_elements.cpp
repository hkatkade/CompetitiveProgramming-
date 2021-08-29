class Solution {
public:
    int dp[5000][75];
    int helper(vector<vector<int>> &mat,int r,int sum,int target){
        if(r>=mat.size()){
            return abs(target-sum);
        }
        if(dp[sum][r]!=-1){
            return dp[sum][r];
        }
        int ans=INT_MAX;
        for(int i=0;i<mat[r].size();i++){
            ans=min(ans,helper(mat,r+1,sum+mat[r][i],target));
        }
        dp[sum][r]=ans;
        return dp[sum][r];
        
    }
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        memset(dp,-1,sizeof(dp));
        return helper(mat,0,0,target);
    }
};