class Solution {
  public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>> &g,vector<vector<int>> &vis,int n,int m,int r,int c){
        vis[r][c]=1;
        int dx[]={-1,0,1,0,-1,-1,1,1};
        int dy[]={0,1,0,-1,-1,1,1,-1};
        for(int i=0;i<8;i++){
            int x=r+dx[i];
            int y=c+dy[i];
            if(x<0 || x>=n || y<0 || y>=m || vis[x][y]==1 || g[x][y]!='1'){
                continue;
            }
            else if(vis[x][y]==0 && g[x][y]=='1'){
                dfs(g,vis,n,m,x,y);
            }
        }
    }
    int numIslands(vector<vector<char>>& g) {
        int n=g.size(),m=g[0].size(),ans=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && g[i][j]=='1'){
                    dfs(g,vis,n,m,i,j);
                    ans++;
                }
            }
        }
        return ans;
        // Code here
    }
};