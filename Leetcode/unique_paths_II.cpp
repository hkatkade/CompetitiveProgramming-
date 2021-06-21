class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        int m=g.size(),n=g[0].size();
        int dp[m][n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<m;i++){
            if(g[i][0]==0){
                dp[i][0]=1;
            }
            else{
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(g[0][i]==0){
                dp[0][i]=1;
            }
            else{
                break;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(g[i][j]==1){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=dp[i][j-1]+dp[i-1][j];
                }
            }
        }
        return dp[m-1][n-1];
    }
};