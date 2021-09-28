class Solution {
public:
    void dfs(vector<vector<int>>& r,vector<int>& vis,int src){
        vis[src]=1;
        for(auto &i:r[src]){
            if(vis[i]==0){
                dfs(r,vis,i);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& r) {
        int c=0,n=r.size()-1;
        vector<int> vis(n+1,0);
        for(int i=0;i<=n;i++){
            if(vis[i]==0){
                c++;
                dfs(r,vis,i);
            }
        }
        return c==1;
    }
};