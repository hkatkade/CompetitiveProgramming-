// Recursion
class Solution {
public:
    int helper(string a,string b,int i,int j){
        if(i>=a.size() || j>=b.size()){
            return 0;
        }
        if(a[i]==b[j]){
            return 1+helper(a,b,i+1,j+1);
        }
        else{
            return max(helper(a,b,i+1,j),helper(a,b,i,j+1));
        }
    }
    int longestCommonSubsequence(string a, string b) {
        return helper(a,b,0,0);
    }
};


// Memoization 
class Solution {
public:
    int dp[1001][1001];
    int helper(string &a,string &b,int i,int j){
        if(i>=a.size() || j>=b.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(a[i]==b[j]){
            return dp[i][j]=1+helper(a,b,i+1,j+1);
        }
        else{
            return dp[i][j]=max(helper(a,b,i+1,j),helper(a,b,i,j+1));
        }
    }
    int longestCommonSubsequence(string a, string b) {
        memset(dp,-1,sizeof(dp));
        return helper(a,b,0,0);
    }
};


// Dynamic programming 
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        // 0 0 0 0 0 0
        // 0 
        // 0
        // 0
        // Initialise array like
		int n = text1.length();
        int m = text2.length();
        int t[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0){
                    t[i][j] = 0;
                }
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(text1[i-1] == text2[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[n][m];
    }
};



