class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0 || n==1){
            return n;
        }
        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        for(int i=0;i<(n+1)/2;i++){
            dp[2*i]=dp[i];
            dp[2*i+1]=dp[i]+dp[i+1];
        }
        int ans=INT_MIN;
        for(auto &i:dp){
            ans=max(ans,i);
        }
        return ans;
    }
};