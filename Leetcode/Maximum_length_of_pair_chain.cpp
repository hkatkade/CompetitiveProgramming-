class Solution {
public:
     static bool comparefn(vector<int>&a, vector<int>&b){
        if(a[1]==b[0]){
            return a[0]<b[1];
        }
        return a[1]<b[0];
    };
    static bool cmp(vector<int>& v, vector<int>& v2) {
        if (v[1] < v2[1])
            return true;
        else if (v[1] == v2[1]) {
            return v[0] < v2[0];
        }
        return false;
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),cmp);
        // for(auto &i:pairs){
        //     cout<<i[0]<<" "<<i[1]<<endl;
        // }
        int n=pairs.size();
        vector<int> dp(n+1);
        dp[0]=1;
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(pairs[i][0]>pairs[j][1]){
                    dp[i]=max(dp[j]+1,dp[i]);
                }
            }
        }
        int ans=1;
        for(auto &i:dp){
            ans=max(ans,i);
        }
        return ans;
    }
};