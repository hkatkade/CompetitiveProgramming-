class Solution {
public:
    void dfs(vector<vector<int>>& a, int sr, int sc, int newColor, vector<vector<int>>& g,vector<vector<int>>& vis,int n,int m){
        vis[sr][sc]=1;
        g[sr][sc]=newColor;
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        for(int i=0;i<4;i++){
            int r=sr+dx[i];
            int c=sc+dy[i];
            if(r>=0 && r<n && c>=0 && c<m && vis[r][c]==0 && a[r][c]==a[sr][sc]){
                dfs(a,r,c,newColor,g,vis,n,m);
            }
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& a, int sr, int sc, int newColor) {
        int n=a.size();
        if(n==0){
            return {{}};
        }
        int m=a[0].size();
        vector<vector<int>> g=a;
        vector<vector<int>> vis(n,vector<int>(m,0));
        dfs(a,sr,sc,newColor,g,vis,n,m);
        return g;
    }
};