class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==1){
            return s;
        }
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        int start=0,l=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                l=2;
                start=i;
            }
        }
        for(int k=3;k<=n;k++){
            for(int i=0;i<n-k+1;i++){
                int j=i+k-1;
                if(s[i]==s[j] && dp[i+1][j-1]==1){
                    dp[i][j]=1;
                    if(k>l){
                        l=k;
                        start=i;
                    }   
                }
            }
        }
        return s.substr(start,l);
    }
};