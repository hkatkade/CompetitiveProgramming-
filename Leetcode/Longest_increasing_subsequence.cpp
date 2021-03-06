class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n=a.size(),ans=1;
        vector<int> dp(n,0);
        dp[0]=1;
        for(int i=1;i<n;i++){
            dp[i]=1;
            for(int j=i-1;j>=0;j--){
                if(a[j]<a[i]){
                    dp[i]=max(dp[j]+1,dp[i]);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};