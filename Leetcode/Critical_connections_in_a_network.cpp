class Solution {
public:
    vector<vector<int>> ans;
    void dfs(int node,int parent,vector<int> &tin,vector<int> &low,vector<int> g[],int timer,vector<int> &vis){
        vis[node]=1;
        tin[node]=low[node]=timer++;
        for(auto &i:g[node]){
            if(i==parent){
                continue;
            }
            if(vis[i]==0){
                dfs(i,node,tin,low,g,timer,vis);
                low[node]=min(low[node],low[i]);
                if(low[i]>tin[node]){
                    ans.push_back({node,i});
                }
            }
            else{
                low[node]=min(low[node],tin[i]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> g[n];
        for(auto &i:connections){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        int timer=0;
        vector<int> vis(n,0),tin(n,-1),low(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(i,-1,tin,low,g,timer,vis);
            }
        }
        return ans;
    }
};