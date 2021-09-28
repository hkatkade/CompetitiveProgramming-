class Solution {
public:
    vector<vector<int>> ans;
    void dfs(int src,int n,vector<vector<int>>& g,vector<int> a){
        a.push_back(src);
        if(src==n){
            ans.push_back(a);
            return;
        }
        for(auto &i:g[src]){
            dfs(i,n,g,a);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size()-1;
        vector<int> a;
        dfs(0,n,graph,a);
        return ans;
    }
};