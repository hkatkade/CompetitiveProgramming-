class Solution {
public:
    int ans=0;
    bool isvalid(int x,int y,int m,int n){
        if(x<0 || y<0 || x>=m || y>=n){
            return false;
        }
        return true;
    }
    int dfs(vector<vector<int>>& a,vector<vector<int>>& dp,int x,int y,int m,int n,int len){
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        int maxx=1;
        for(int i=0;i<4;i++){
            int r=x+dx[i];
            int c=y+dy[i];
            if(isvalid(r,c,m,n)){
                if(a[r][c]>a[x][y]){
                    maxx=max(maxx,1+dfs(a,dp,r,c,m,n,len+1));
                }
            }
            
        }
        dp[x][y]=maxx;
        return dp[x][y];
    }
    int longestIncreasingPath(vector<vector<int>>& a) {
        int m=a.size(),n=a[0].size();
        if(n==1 && m==1){
            return 1;
        }
        vector<vector<int>> dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans=max(ans,dfs(a,dp,i,j,m,n,1));
            }
        }
        return ans;
    }
};