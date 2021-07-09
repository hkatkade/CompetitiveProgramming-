class Solution {
public:
    void dfs(vector<vector<char>>& g,vector<vector<int>>& vis,int n,int m,int x,int y){
        vis[x][y]=1;
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int r=x+dx[i],c=y+dy[i];
            if(r<0 || r>=n || c<0 || c>=m || vis[r][c]==1 || g[r][c]!='1'){
                continue;
            }
            else if(vis[r][c]==0 && g[r][c]=='1'){
                dfs(g,vis,n,m,x+dx[i],y+dy[i]);
            }
        }
    }
    int numIslands(vector<vector<char>>& g) {
        int n=g.size(),m=g[0].size(),ans=0;
        vector<vector<int>> vis(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && g[i][j]=='1'){
                    dfs(g,vis,n,m,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};


class Solution {
public:
    void helper(vector<vector<char>>& grid, int i, int j, int m,int n)
    {
        if(i<0 || j<0 || i>=m ||j >=n || grid[i][j]=='0' )
            return ;
        grid[i][j]='0';
        helper(grid,i+1,j,m,n);
        helper(grid,i,j+1,m,n);
        helper(grid,i-1,j,m,n);
        helper(grid,i,j-1,m,n);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int countIsland= 0;
        int m= grid.size();
        int n= grid[0].size();
        if(m==0)
            return 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    countIsland++;
                    helper(grid,i,j,m,n);
                 }           
            }
        }
        
       return countIsland;
    }
};