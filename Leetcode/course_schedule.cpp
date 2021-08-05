class Solution {
public:
    // 2 -> processing
    // 1 -> processed
    // 0 -> unvisited
    bool cyclic(vector<vector<int>>& g,int n,vector<int>& vis,int src){
        if(vis[src]==2){
            return true;
        }
        vis[src]=2;
        for(auto &i:g[src]){
            if(vis[i]!=1){
                if(cyclic(g,n,vis,i)){
                    return true;
                }
            }
        }
        vis[src]=1;
        return false;
        
    }
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>> g(n);
        for(int i=0;i<p.size();i++){
            g[p[i][0]].push_back(p[i][1]);
        }
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                if(cyclic(g,n,vis,i)){
                    return false;
                }
            }
        }
        return true;
    }
};