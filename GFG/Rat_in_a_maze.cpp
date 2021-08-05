class Solution{
    public:
    vector<string> ans;
    void dfs(vector<vector<int>> &m,vector<vector<int>>& vis,int n,string s,int i,int j){
        if(i>=n || j>=n || i<0 || j<0){
            return;
        }
        if(m[i][j]==0 or vis[i][j]==1){
            return;
        }
        if(i==n-1 && j==n-1){
            ans.push_back(s);
            return;
        }
        vis[i][j]=1;
        dfs(m,vis,n,s+'U',i-1,j);
        dfs(m,vis,n,s+'D',i+1,j);
        dfs(m,vis,n,s+'R',i,j+1);
        dfs(m,vis,n,s+'L',i,j-1);
        vis[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        if(m[0][0]==0 || m[n-1][n-1]==0){
            return ans;
        }
        string s="";
        vector<vector<int>> vis(n,vector<int> (n,0));
        dfs(m,vis,n,s,0,0);
        sort(ans.begin(),ans.end());
        return ans;
        // Your code goes here
    }
};