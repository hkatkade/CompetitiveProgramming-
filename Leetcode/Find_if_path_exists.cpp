class Solution {
public:
    void dfs(vector<vector<int>>& g,int node,int end,vector<int>& vis){
        vis[node]=1;
        if(node==end){
            return;
        }
        for(auto &i:g[node]){
            if(vis[i]==0){
                dfs(g,i,end,vis);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> g(n);
        vector<int> vis(n,0);
        for(auto &i:edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        dfs(g,start,end,vis);
        return vis[end];
    }
};