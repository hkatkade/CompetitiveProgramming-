class Solution {
public:
    void dfs(int node,vector<vector<int>>& g,vector<int>& vis){
        vis[node]=1;
        for(auto &i:g[node]){
            if(vis[i]==0){
                dfs(i,g,vis);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& c) {
        int edges=c.size(),cn=0;
        vector<vector<int>> g(n);
        for(auto &i:c){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                cn++;
                dfs(i,g,vis);
            }
        }
        if(cn==1){
            return 0;
        }
        else{
            if(edges>=n-1){
                return cn-1;
            }
            else{
                return -1;
            }
        }
    }
};